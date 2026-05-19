#pragma once
#include "ReporteBase.h"
#include <memory>
//contrato que van a seguir todos los observadores
class IObservador {
public: 
    virtual ~IObservador () = default;
    virtual void actualizarReporte(shared_ptr<ReporteBase> r )const=0;
};