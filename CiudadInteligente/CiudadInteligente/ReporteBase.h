#pragma once
#include <string >
#include <sstream>

using namespace std;
class ReporteBase
{
protected: 
    string modulo /*nombre del reporte=ambiental, etc...*/, lugar, estado;
    bool critico;
public: 
    ReporteBase(string modulo, string lugar, string estado);
    string getModulo();
    string getLugar();
    string getEstado();
    virtual string toString() const =0;
    bool esCritico() const;
    //basicamente es la base de los demas reportes, porque a lo que entendi son 3 tipos de reposrtes
    //difrentes entonces aja y los 3 reportes comparten estos atributos pero tienen distintas variaciones y asi
};

