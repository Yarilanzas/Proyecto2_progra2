#pragma once
#include "IFuenteDatosReporte.h"
#include "DatosTrafico.h"
class Adaptadortrafico : public IFuenteDatosReporte {
    private:
        DatosTrafico* adaptado; // Big Three: constructor, destructor, copy constructor, assignment operator
public:
    explicit Adaptadortrafico(DatosTrafico* adaptado);
    ~Adaptadortrafico();
    Adaptadortrafico();
    Adaptadortrafico(const Adaptadortrafico& otro);
    Adaptadortrafico& operator=(const Adaptadortrafico  & otro);
    string obtenerDatos() const override;
    string getNombreModulo() const override;
};

