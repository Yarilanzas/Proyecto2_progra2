#include "ReporteAmbiental.h"

ReporteAmbiental::ReporteAmbiental(string m, string l, string e, string c, double nR, string esA): ReporteBase(m,l,e)
{
    this->calidadAire = c;
    this->nivelDeRuido = nR;
    this->estadoAmbiental = esA;

    if (nivelDeRuido >= 80) { critico = true;  }
}

string ReporteAmbiental::toString() const
{
    stringstream ss;
    ss << "---------------------------";
    ss << "REPORTE DE ENERGÍA\n";
    ss << "Modulo: " << modulo << "\n";
    ss << "Lugar: " << lugar << "\n";
    ss << "Estado: " << estado << "\n";
    ss << "Calidad de aire: " << calidadAire << "\n";
    ss << "Nivel de ruido: " << nivelDeRuido << " dB\n";
    ss << "Estado Ambiental: " << estadoAmbiental << "\n";
 
    return ss.str();
}
