#include "DatosTrafico.h"
using namespace std;

// PATRON ADAPTER - Implementacion del Adaptee de trafico
// Constructor sin vectores: las zonas de congestion se agregan despues
DatosTrafico::DatosTrafico(const string& zona, int vehiculoDetectados, double velocidadPromedio, int semaforosInteligentes, int incidentesReportados, bool enAltaCongestion) {
    this->zona = zona;
    this->vehiculoDetectados = vehiculoDetectados;
    this->velocidadPromedio = velocidadPromedio;
    this->semaforosInteligentes = semaforosInteligentes;
    this->incidentesReportados = incidentesReportados;
    this->enAltaCongestion = enAltaCongestion;
}
string DatosTrafico::getZona() const {
    return zona;
}

int DatosTrafico::getVehiculosDetectados() const {
    return vehiculoDetectados;
}

double DatosTrafico::getVelocidadPromedio() const {
    return velocidadPromedio;
}

int DatosTrafico::getSemaforos() const {
    return semaforosInteligentes;
}

int DatosTrafico::getIncidentes() const {
    return incidentesReportados;
}

bool DatosTrafico::enAltacongestion() const {
    return enAltaCongestion;
}

string DatosTrafico::getEstado() const {
    if (enAltacongestion()) {
        return "Congestion alta";
    }
    if (velocidadPromedio < 20.0) {
        return "Congestion moderada";
    }
    return "Flujo normal";
}

void DatosTrafico::agregarZonaCongestion(const string& z) {
    zonasCongestion.push_back(z);
}

vector<string> DatosTrafico::getZonasCongestion() const {
    return zonasCongestion;
}