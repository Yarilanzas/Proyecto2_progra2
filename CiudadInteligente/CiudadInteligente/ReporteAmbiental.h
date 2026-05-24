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
   // string modulo, lugar, estado, 
        string calidadAire, estadoAmbiental;
        double nivelDeRuido;
public:
    ReporteAmbiental(string m,string l,string e,string c, double nR, string esA);
    string toString() const override;

};



