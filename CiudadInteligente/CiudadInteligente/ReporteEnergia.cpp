#include "ReporteEnergia.h"

ReporteEnergia::ReporteEnergia(string m, string l, string es, double cT, double pT, bool fr): ReporteBase(m,l, es)
{
    this->consumoTotal = cT;
    this->produccionEnergetica = pT; 
    this->fuentesRenovables = fr;
    this->alertas = false; 
    if (consumoTotal >= produccionEnergetica) {
        this->alertas = true;
        critico = true;
    }

}

string ReporteEnergia::toString() const
{
    stringstream ss;
    ss << "---------------------------";
    ss << "REPORTE DE ENERGÍA\n";
    ss << "Modulo: " << modulo << "\n";
    ss << "Lugar: " << lugar << "\n";
    ss << "Estado: " << estado << "\n";
    ss << "Consumo total: " << consumoTotal << "\n";
    ss << "Produccion energetica: " << produccionEnergetica << "\n";
    ss << "Distritos con mayor consumo: \n";
    for (auto d : distritosMayorConsumo) {
        ss << d->getNombre()<< "\n";
    }
    ss << "Alertas de sobreconsumo: " << (alertas ? "No tiene alertas de consumo" : "Sí tiene alertas de consumo") << "\n";
    ss << "Uso de fuentes renovables: " << (fuentesRenovables ? "Usa fuentes renovables" : "No usa fuentes renovables ") << "\n";
    return ss.str();
}
