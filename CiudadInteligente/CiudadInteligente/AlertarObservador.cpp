
#include "AlertarObservador.h"


void AlertarObservador::actualizarReporte(shared_ptr<ReporteBase> r) const
{
    cout << "ALERTA: " << r->getEstado() << " - DATO EN ESTADO CRITICO!!!\n" ;
}
