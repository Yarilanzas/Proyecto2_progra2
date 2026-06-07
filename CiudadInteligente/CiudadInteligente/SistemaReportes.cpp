#include "SistemaReportes.h"

SistemaReportes::SistemaReportes() {}


void SistemaReportes::agregarObservador(IObservador *obs) 
{
    observadores.push_back(obs);
}

void SistemaReportes::eliminarObservador(IObservador* obs) 
{
    observadores.erase(remove(observadores.begin(), observadores.end(), obs), observadores.end());
}


void SistemaReportes::agregarReporte(shared_ptr<ReporteBase> reporte)
{
    reportes.push_back(reporte);
}

void SistemaReportes::VerificarCriticos()
{
    for (const auto&  r : reportes) {
        if (r->esCritico()) { notificar(r); }
    }
}


void SistemaReportes::notificar(shared_ptr<ReporteBase> reporte) {
    for (const auto&  obs : observadores) {
        obs->actualizarReporte(reporte);
    }
}

void SistemaReportes::guardarEnArchivo(const string& nombreArchivo) const
{
    ofstream archivo(nombreArchivo);  
    if (!archivo.is_open()) {
        throw runtime_error("No se pudo abrir el archivo para guardar: " + nombreArchivo);
    }
    archivo << "=== REPORTES CIUDAD INTELIGENTE ===" << endl;
    for (const auto& r : reportes) {
        archivo << r->toString() << endl;
        archivo << "---" << endl;
    }
    archivo.close();
}

void SistemaReportes::cargarDesdeArchivo(const string& nombreArchivo)
{
    ifstream archivo(nombreArchivo);  
    if (!archivo.is_open()) {
        throw runtime_error("No se pudo abrir el archivo: " + nombreArchivo);
    }
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << "\n";
    }
    archivo.close();
}
