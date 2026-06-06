#include "Adaptadortrafico.h"
#include <sstream>
using namespace std;

Adaptadortrafico::Adaptadortrafico(DatosTrafico* adaptado) {
    this->adaptado = adaptado;
}
Adaptadortrafico::~Adaptadortrafico() {
    delete adaptado;
}
// BIG 3 - constructor por defecto
Adaptadortrafico::Adaptadortrafico() : adaptado(nullptr) {}

// BIG 3 - copy constructor
Adaptadortrafico::Adaptadortrafico(const Adaptadortrafico& otro) {
    adaptado = new DatosTrafico(*otro.adaptado);
}

// BIG 3 - operator=
Adaptadortrafico& Adaptadortrafico::operator=(const Adaptadortrafico& otro) {
    if (this != &otro) {
        delete adaptado;
        adaptado = new DatosTrafico(*otro.adaptado);
    }
    return *this;
}

string Adaptadortrafico::obtenerDatos() const {
    ostringstream oss;
    oss << "Zona: " << adaptado->getZona() << "\n";
    oss << "Vehiculos Detectados: " << adaptado->getVehiculosDetectados() << "\n";
    oss << "Velocidad Promedio: " << adaptado->getVelocidadPromedio() << " km/h\n";
    oss << "Semaforos Inteligentes: " << adaptado->getSemaforos() << "\n";
    oss << "Incidentes Reportados: " << adaptado->getIncidentes() << "\n";

    vector<string> zonasCongestion = adaptado->getZonasCongestion();
    if (!zonasCongestion.empty()) {
        oss << "Zonas de Congestion: ";
        for (const auto& zona : zonasCongestion) {
            oss << zona << " ";
        }
        oss << "\n";
    }
    oss << "Estado: " << adaptado->getEstado() << "\n";
    return oss.str();
}

string Adaptadortrafico::getNombreModulo() const {
    return "Modulo de Trafico";
}