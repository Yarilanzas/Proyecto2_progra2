#include "AdaptadorEnergia.h"
#include <sstream>

AdaptadorEnergia::AdaptadorEnergia(DatosEnergia* adaptado) {
    this->adaptado = adaptado;

}
AdaptadorEnergia::~AdaptadorEnergia() {
    delete adaptado;
}
AdaptadorEnergia::AdaptadorEnergia(const AdaptadorEnergia& otro) {
    adaptado = new DatosEnergia(*otro.adaptado);
}
AdaptadorEnergia& AdaptadorEnergia::operator=(const AdaptadorEnergia& otro) {
    if (this != &otro) {
        delete adaptado;
        adaptado = new DatosEnergia(*otro.adaptado);
    }
    return *this;
}
string AdaptadorEnergia::obtenerDatos() const {
    std::ostringstream oss;
    oss << "Distrito: " << adaptado->getDistrito() << "\n";
    oss << "Consumo Total: " << adaptado->getConsumoTotal() << " kWh\n";
    oss << "Producción Solar: " << adaptado->getProduccionSolar() << " kWh\n";
    oss << "Producción Total: " << adaptado->getProduccionTotal() << " kWh\n";
    oss << "Alertas de Sobreconsumo: " << adaptado->getAlertas() << "\n";
    return oss.str();

vector<string> fuentes = adaptado->getFuentesRenovables();
if(!fuentes.empty()){
    oss << "Fuentes Renovables: ";
    for(const auto& fuente : fuentes){
        oss << fuente << " ";
    }
    oss << "\n";
}

oss << "Estado: " << adaptado->getEstado() << "\n";
return oss.str();
}

string AdaptadorEnergia::getNombreModulo() const {
    return "Módulo de Energía";
}
