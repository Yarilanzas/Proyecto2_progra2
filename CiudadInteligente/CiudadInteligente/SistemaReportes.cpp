#include "SistemaReportes.h"


void SistemaReportes::agregarObservador(IObservador *obs) const
{
    //observadores.push_back(*obs);
}

void SistemaReportes::eliminarObservador(IObservador* obs) const
{
    //bservadores.erase(remove(observadores.begin(), observadores.end(), obs), observadores.end());
}

void SistemaReportes::agregarReporte(shared_ptr<ReporteBase> reporte)
{
    reportes.push_back(reporte);
}
