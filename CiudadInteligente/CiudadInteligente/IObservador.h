#pragma once
#include "ReporteBase.h"
#include <memory>
//Base para la aplicacion del patron observer: es aquel patron que simula un tipo de "suscripcion" 
// y esto permite notificar a los objetos que algo ha pasado a aquel objeto que esten observando 
//Contrato que van a seguir todos los observadores
class IObservador {
public: 
    virtual ~IObservador () = default;
    virtual void actualizarReporte(shared_ptr<ReporteBase> r )const=0;
};