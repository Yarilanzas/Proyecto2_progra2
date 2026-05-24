#include "ReporteTrafico.h"

ReporteTrafico::ReporteTrafico(string m, string l, string es, int vM, int a, double pV): ReporteBase(m, l,es)
{
    this->vehiculosMonitoreados= vM;
    this->accidentes = a;
    this->promedioDeVelocidad = pV;
    this->semaforosInteligentes = true; 

    if (promedioDeVelocidad >= 20) { critico = true; }

}

string ReporteTrafico::toString() const
{
    stringstream ss;
    ss << "---------------------------";
    ss << "REPORTE DE ENERGÍA\n";
    ss << "Modulo: " << modulo << "\n";
    ss << "Lugar: " << lugar << "\n";
    ss << "Estado: " << estado << "\n";
    ss << "Vehiculos monitoreados: " << vehiculosMonitoreados << "\n";
    ss << "Accidentes registrados: " << accidentes << "\n";
    ss << "Promedio de velocidad: " << promedioDeVelocidad << "\n";
    ss << "Distritos con mayor congestion: \n";
    for (auto d : distritosMayorCongestion) {
        ss << d->getNombre() << "\n";
    }
    ss << "Estado de semaforos inteligentes: " << (semaforosInteligentes ? "Semaforos inteligentes en uso" : "Sin semaforos inteligentes en uso ") << "\n";
    return ss.str();
}
