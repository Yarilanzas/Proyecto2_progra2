#include "Menuprincipal.h"
#include <iostream>
#include <string>
using namespace std;

Menuprincipal::Menuprincipal() {}


void Menuprincipal::mostrarMenu() const {
    cout << "====== Menu Principal =======" << endl;
    cout << "1. Generar Reporte de Energia" << endl;
    cout << "2. Generar Reporte de Trafico" << endl;
    cout << "3. Generar Reporte Ambiental" << endl;
    cout << "4. Ver Estadisticas Generales" << endl;
    cout << "5. Guardar Reportes" << endl;
    cout << "6. Cargar Reportes" << endl;
    cout << "0. Salir" << endl;
    cout << "=================================" << endl;
}
void Menuprincipal::generarReporteEnergia() const {
    cout << "\nGenerando reporte de energia...\n";

    DatosEnergia* datos = new DatosEnergia("Norte", 4500.0, 1200.0, 1800.0, 2, false);
    datos->agregarFuenteRenovable("Solar");
    datos->agregarFuenteRenovable("Eolica");

    AdaptadorEnergia adaptador(datos);
    cout << adaptador.obtenerDatos() << endl;
}
void Menuprincipal::generarReporteTrafico() const {
    cout << "\nGenerando reporte de trafico...\n";

    DatosTrafico* datos = new DatosTrafico("Avenida Central", 850, 32.0, 12, 3, true);
    datos->agregarZonaCongestion("Calle 5");
    datos->agregarZonaCongestion("Rotonda Central");

    Adapatdortrafico adaptador(datos);
    cout << adaptador.obtenerDatos() << endl;
}
void Menuprincipal::generarReporteAmbiental() const {
    cout << "\nGenerando reporte ambiental...\n";

    AdaptadorAmbiental adaptador("Este", "Regular", 72.0, "Normal", 55, false);
    cout << adaptador.obtenerDatos() << endl;
}
void Menuprincipal::verEstadisticasGenerales() const {
    cout << "=====================================" << endl;
    cout << "       Estadisticas Generales        " << endl;
    cout << "=====================================" << endl;
    cout << "Modulos activos: Energia, Trafico, Ambiental" << endl;
    cout << "Use las opciones 1-3 para ver cada reporte." << endl;
    cout << "======================================" << endl;
}
void Menuprincipal::guardarReportes() const {
    cout << "Guardando reportes..." << endl;
    cout << "Reportes guardados en: reportes_ciudad.txt\n";
}
void Menuprincipal::cargarReportes() const {
    cout << "Cargando reportes..." << endl;
    cout << "Reportes cargados desde: reportes_ciudad.txt\n";
}
void Menuprincipal::ejecutar() {
    int opcion = -1;

    while (opcion != 0) {
        mostrarMenu();

        // Usamos leerEntrada para validar que no este vacio ni sean solo espacios
        string entrada = leerEntrada("Seleccione una opcion: ");

        try {
            opcion = stoi(entrada);
        }
        catch (const invalid_argument&) {
            cout << "Opcion invalida. Ingrese un numero.\n";
            continue;
        }
        switch (opcion) {
        case 1: generarReporteEnergia();    break;
        case 2: generarReporteTrafico();    break;
        case 3: generarReporteAmbiental();  break;
        case 4: verEstadisticasGenerales(); break;
        case 5: guardarReportes();          break;
        case 6: cargarReportes();           break;
        case 0: cout << "\nSaliendo del sistema...\n"; break;
        default: cout << "Opcion no valida. Intente de nuevo.\n"; break;
        }
    }
}
// Valida que la entrada no este vacia ni sea solo espacios
string Menuprincipal::leerEntrada(const string& mensaje) const {
    string entrada;
    while (true) {
        cout << mensaje;
        getline(cin, entrada);
        if (!entrada.empty()) {
            bool tieneTextoValido = false;
            for (size_t i = 0; i < entrada.length(); ++i) {
                if (entrada[i] != ' ' && entrada[i] != '\t') {
                    tieneTextoValido = true;
                    break;
                }
            }
            if (tieneTextoValido) {
                return entrada;
            }
        }
        cout << "La entrada no puede estar vacia.\n";
    }
}
