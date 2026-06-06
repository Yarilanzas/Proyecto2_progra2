
#pragma once
#include "AdaptadorEnergia.h"
#include "Adaptadortrafico.h"
#include "AdaptadorAmbiental.h"
#include "SistemaReportes.h"
#include "AlertarObservador.h"
#include "ReporteEnergia.h"
#include "Reportetrafico.h"
#include "ReporteAmbiental.h"
#include <string>
using namespace std;

// El menu solo habla directamente con los adaptadores y SistemaReportes.
// Esta clase solo maneja la interaccion con el usuario en consola
class Menuprincipal {
private:
    AlertarObservador alerta; // OBSERVER: observador registrado en SistemaReportes

    string leerEntrada(const string& mensaje) const;
    void limpiarPantalla()          const;
    void generarReporteEnergia()    const;
    void generarReporteTrafico()    const;
    void generarReporteAmbiental()  const;
    void verEstadisticasGenerales() const;
    void guardarReportes()          const;
    void cargarReportes()           const;
    void mostrarMenu()              const;

public:
    Menuprincipal();
    ~Menuprincipal();
    void ejecutar();
};