#pragma once
#include "IFuenteDatosReporte.h"
#include "DatosTrafico.h"
class Adapatdortrafico : public IFuenteDatosReporte {
    private:
        DatosTrafico* adaptado; // Big Three: constructor, destructor, copy constructor, assignment operator
public:
    explicit Adapatdortrafico(DatosTrafico* adaptado);
    ~Adapatdortrafico();
    Adapatdortrafico(const Adapatdortrafico& otro);
    Adapatdortrafico& operator=(const Adapatdortrafico& otro);
    string obtenerDatos() const override;
    string getNombreModulo() const override;
};

