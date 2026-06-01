#include "Menuprincipal.h"
#include <iostream>
#include <limits>
using namespace std;

Menuprincipal::Menuprincipal() {}

void Menuprincipal::mostrarMenu() const {
    cout << "====== Menú Principal =======" << endl;
    cout << "1. Generar Reporte de Energía" << endl;
    cout << "2. Generar Reporte de Tráfico" << endl;
    cout << "3. Generar Reporte Ambiental" << endl;
    cout << "4. Ver Estadísticas Generales" << endl;
    cout << "5. Guardar Reportes" << endl;
    cout << "6. Cargar Reportes" << endl;
    cout << "0. Salir" << endl;
    cout << "=================================" << endl;
    cout << "Seleccione una opción: " << endl;
}

void Menuprincipal::generarReporteEnergia() const {
    cout << "Generando reporte de energía..." << endl;

   DatosTrafico* datosTrafico = new DatosTrafico("Avenida Central", 850, 32.0, 12, 3, true);
   datos->agregarZonaCongestion("Calle 5");
   datos->agregarZonaCongestion("Rotonda Central");

   Adapatdortrafico adaptador(datosTrafico);
   cout << adaptador.obtenerDatos() << endl;
}

void Menuprincipal::verEstadisticasGenerales() const {
    cout << "=====================================" << endl;
    cout << "       Estadísticas Generales        " << endl;
    cout << "=====================================" << endl;
    cout << "Modulos activos: Energía, Tráfico, Ambiental" << endl;
    cout << "Use las opciones 1-3 para verr cada reporte " << endl;
    cout << "======================================" << endl;
}
void Menuprincipal::guardarReportes() const {
    cout << "Guardando reportes..." << endl;
    cout << "Reportes guardados en: reportes_ciudad.txt\n";
    // Aquí se implementaría la lógica para guardar los reportes generados
}
void Menuprincipal::cargarReportes() const {
    cout << "Cargando reportes..." << endl;
    cout << "Reportes cargados desde: reportes_ciudad.txt\n";
    // Aquí se implementaría la lógica para cargar los reportes previamente guardados
}
void Menuprincipal::ejecutar() {
    int opcion = -1;

    while (opcion != 0) {
        mostrarMenu();

        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcion invalida. Intente de nuevo.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

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

