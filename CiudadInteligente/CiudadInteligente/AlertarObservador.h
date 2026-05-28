#pragma once
#include "IObservador.h"
#include <iostream>
using namespace std;
class AlertarObservador : public IObservador
{
public: 
    void actualizarReporte(shared_ptr<ReporteBase> r)const override;
};

