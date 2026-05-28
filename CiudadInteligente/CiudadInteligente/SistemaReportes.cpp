#include "SistemaReportes.h"




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
