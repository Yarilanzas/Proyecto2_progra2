#include "ReporteBase.h"

ReporteBase::ReporteBase(string modulo, string lugar, string estado)
{
    this->modulo = modulo;
    this->lugar = lugar;
    this->estado = estado;

}

string ReporteBase::getModulo()
{
    return modulo;
}

string ReporteBase::getLugar()
{
    return lugar;
}

string ReporteBase::getEstado()
{
    return estado;
}
