#pragma once
#pragma once
#include "ReporteBase.h"
#include <vector>
#include <memory>
#include "Distrito.h"
class ReporteAmbiental: public ReporteBase
{
private:
    //de reporte base
    string modulo, lugar, estado, calidadAire, nivelDeRuido, estadoAmbiental;
public:
    ReporteAmbiental(string m,string l,string e,string c, string nR, string esA);
    string toString() const override;

};



