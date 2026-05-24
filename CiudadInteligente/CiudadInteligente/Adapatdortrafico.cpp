#include "Adapatdortrafico.h"
#include <sstream>

Adapatdortrafico::Adapatdortrafico(DatosTrafico* adaptado) {
    this->adaptado = adaptado;
}
Adapatdortrafico::~Adapatdortrafico() {
    delete adaptado;
}
Adapatdortrafico::Adapatdortrafico(const Adapatdortrafico& otro) {
    adaptado = new DatosTrafico(*otro.adaptado);
}
Adapatdortrafico& Adapatdortrafico::operator=(const Adapatdortrafico& otro) {
    if (this != &otro) {
        delete adaptado;
        adaptado = new DatosTrafico(*otro.adaptado);
    }
    return *this;
}
string Adapatdortrafico::obtenerDatos() const {
    std::ostringstream oss;
    oss << "Zona: " << adaptado->getZona() << "\n";
    oss << "Vehículos Detectados: " << adaptado->getVehiculosDetectados() << "\n";
    oss << "Velocidad Promedio: " << adaptado->getVelocidadPromedio() << " km/h\n";
    oss << "Semáforos Inteligentes: " << adaptado->getSemaforos() << "\n";
    oss << "Incidentes Reportados: " << adaptado->getIncidentes() << "\n";
    vector<string> zonasCongestion = adaptado->getZonasCongestion();
    if (!zonasCongestion.empty()) {
        oss << "Zonas de Congestión: ";
        for (const auto& zona : zonasCongestion) {
            oss << zona << " ";
        }
        oss << "\n";
    }
    oss << "Estado: " << adaptado->getEstado() << "\n";
    return oss.str();
}
string Adapatdortrafico::getNombreModulo() const {
    return "Módulo de Tráfico";
}

