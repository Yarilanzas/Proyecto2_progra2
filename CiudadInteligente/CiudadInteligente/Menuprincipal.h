#pragma once
#include "Adapatdortrafico.h"
#include "AdaptadorAmbiental.h" 
#include "AdaptadorEnergia.h"


//eesta clase solo maneja el menu y las opciones del menu,
// no se encarga de generar los reportes ni nada,
// solo es la interfaz con el usuario, 

class Menuprincipal
{
private:
    void generarReporteEnergia() const;
    void generarReporteTrafico() const;
    void generarReporteAmbiental() const;
    void verEstadisticasGenerales() const;  
    void guardarReportes() const;
    void cargarReportes() const;
    void mostrarMenu() const;

    string leerEntrada(const string& mensaje) const;
public:
    Menuprincipal();
    void ejecutar();
};

