
#include "AlertarObservador.h"


void AlertarObservador::actualizarReporte(shared_ptr<ReporteBase> r) const
{
    r->getEstado() + "ALERTA DATO EN ESTADO CRITICO!!!"; 
}
