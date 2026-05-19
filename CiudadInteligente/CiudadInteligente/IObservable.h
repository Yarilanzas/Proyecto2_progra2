#pragma once
#pragma once
#include "IObservador.h"
#include "ReporteBase.h"
#include <memory>
//contrato que van a seguir todos los que son observados

class IObservable {
public:
    virtual ~IObservable() = default;
    virtual void actualizarReporte(shared_ptr<ReporteBase> r)const = 0;
    virtual void suscribir(shared_ptr<IObservador> obs)const=0;
    virtual void desuscribir(shared_ptr<IObservador> obs)const = 0;
    virtual void notificar(shared_ptr<ReporteBase> obs)const = 0;

    
};