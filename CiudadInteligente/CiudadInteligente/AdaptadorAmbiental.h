#pragma once
#include "IFuenteDatosReporte.h"
#include <string>
//Patron Adapter
//Principio abierto / cerrado
//cuando se cree Datos Ambiental se conectara aqui sin que el resto del sistema cambie
//Principio parnas

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

