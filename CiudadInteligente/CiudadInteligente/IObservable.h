#pragma once
#pragma once
#include "IObservador.h"
#include "ReporteBase.h"
#include <memory>
//contrato que van a seguir todos los que son observados

class IObservable {
public:
    virtual ~IObservable() = default;
    //virtual void actualizarReporte(shared_ptr<ReporteBase> r)const = 0;
    virtual void agregarObservador(IObservador* obs)const=0;
    virtual void eliminarObservador(IObservador* obs)const = 0;
    virtual void notificar() = 0;

    
};