#include "DatosEnergia.h"

DatosEnergia::DatosEnergia(std::string nomDistrito, double consumo, double solar, double produTotal, int alertas, bool sobreconsumo) {
    this->nomDistrito = nomDistrito;
    this->consumoTotal = consumo;
    this->produccionSolar = solar;
    this->produccionTotal = produTotal;
    this->aletarSobreconsumo = alertas;
    this->enSobreconsumo = sobreconsumo;

}
std::string DatosEnergia::getDistrito() const {
    return nomDistrito;
}
double DatosEnergia::getConsumoTotal() const {
    return consumoTotal;
}
double DatosEnergia::getProduccionSolar() const {
    return produccionSolar;
}
double DatosEnergia::getProduccionTotal() const {
    return produccionTotal;
}
int DatosEnergia::getAlertas() const {
    return aletarSobreconsumo;
}
bool DatosEnergia::haySobreconsumo() const {
    return enSobreconsumo;
}
std::string DatosEnergia::getEstado() const {
    if (enSobreconsumo) {
        return "SOBRECONSUMO";
    } else {
        return "NORMAL";
    }
}
void DatosEnergia::agregarFuenteRenovable(const std::string& fuente) {
    fuentesRenovables.push_back(fuente);
}  
std::vector<std::string> DatosEnergia::getFuentesRenovables() const {
    return fuentesRenovables;
}


    