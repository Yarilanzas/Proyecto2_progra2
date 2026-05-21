#pragma once
#include "ReporteBase.h"
#include <vector>
#include <memory>
#include "Distrito.h"
using namespace std;
class ReporteEnergia: public ReporteBase
{
private: 
    //de reporte base
    string modulo, lugar, estado;
    //propios
    double consumoTotal, produccionEnergetica;
    vector<shared_ptr<Distrito>> distritosMayorConsumo;
    bool alertas, fuentesRenovables; 
public:
    ReporteEnergia(string m, string l, string es, double cT, double pT);
    string toString() const override;

};

