#pragma once
#include "IFuenteDatosReporte.h"
#include <string>
//Patron Adapter: es un patrón que permite que dos objetos con interfaces incompatibles puedan trabajar entre si 
//SOLID: Principio abierto / cerrado
//Cuando se cree Datos Ambiental se conectara aqui sin que el resto del sistema cambie
//Principio parnas:se deja publica la informacion unicamente necesaria para su uso 

class AdaptadorAmbiental : public IFuenteDatosReporte {
private:
    std::string distrito;
    string calidadAire;
    double nivelRuido;
    string estadoResiduos;
    int indiceContaminacion;
    bool enAlertaAmbiental;
    string getEstado() const;
public:
    AdaptadorAmbiental(const std::string& distrito, 
        const std::string& calidadAire = "Regular",
        double nivelRuido = 65.0, 
        const std::string& estadoResiduos = "Normal",
        int indiceContaminacion = 40,
        bool enAlertaAmbiental = false);

    ~AdaptadorAmbiental() = default;
    string obtenerDatos() const override;
    string getNombreModulo() const override;

};

