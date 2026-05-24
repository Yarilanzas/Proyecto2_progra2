#pragma once
#include "IObservador.h"
class AlertarObservador : public IObservador
{
public: 
    void actualizarReporte(shared_ptr<ReporteBase> r)const override;
};

