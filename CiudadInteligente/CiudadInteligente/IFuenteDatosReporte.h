#pragma once
#include <string>
using namespace std;
class IFuenteDatosReporte {
    ~IFuenteDatosReporte()= default;
    virtual string obtenerDatos() const=0;
    virtual string getNombreModulo()const = 0;
};