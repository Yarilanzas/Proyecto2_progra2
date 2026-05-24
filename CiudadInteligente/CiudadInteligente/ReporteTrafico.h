#pragma once
#include "ReporteBase.h"
#include <vector>
#include <memory>
#include "Distrito.h"
using namespace std;
class ReporteTrafico : public ReporteBase
{
private: 
    //string modulo, lugar, estado;
    int vehiculosMonitoreados, accidentes;
    vector<shared_ptr<Distrito>> distritosMayorCongestion;
    double promedioDeVelocidad;
    bool semaforosInteligentes; 
public: 
    ReporteTrafico(string m, string l, string es, int vM, int a, double pV);
    string toString() const override;
};

