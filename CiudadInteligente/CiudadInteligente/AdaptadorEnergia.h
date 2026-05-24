#pragma once
#include "IFuenteDatosReporte.h"
#include "DatosEnergia.h"   

class AdaptadorEnergia : public  IFuenteDatosReporte {
private:
    DatosEnergia* adaptado; // Big Three: constructor, destructor, copy constructor, assignment operator
public:
    explicit AdaptadorEnergia(DatosEnergia* adaptado);
    ~AdaptadorEnergia();
    AdaptadorEnergia(const AdaptadorEnergia& otro);
    AdaptadorEnergia& operator=(const AdaptadorEnergia& otro);
    string obtenerDatos() const override;
    string getNombreModulo() const override;    

  

};

