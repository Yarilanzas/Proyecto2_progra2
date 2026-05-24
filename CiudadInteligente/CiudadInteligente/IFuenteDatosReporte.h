#pragma once
#include <string>
using namespace std;
class IFuenteDatosReporte {
public:
    ~IFuenteDatosReporte()= default;
    virtual string obtenerDatos() const=0;
    virtual string getNombreModulo()const = 0;
};