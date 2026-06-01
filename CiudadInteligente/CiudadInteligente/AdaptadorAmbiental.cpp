#include "AdaptadorAmbiental.h"
#include <sstream>

using namespace std;    

AdaptadorAmbiental::AdaptadorAmbiental(const string& distrito, const string& calidadAire, double nivelRuido, const string& estadoResiduos, int indiceContaminacion, bool enAlertaAmbiental) {
    this->distrito = distrito;
    this->calidadAire = calidadAire;
    this->nivelRuido = nivelRuido;
    this->estadoResiduos = estadoResiduos;
    this->indiceContaminacion = indiceContaminacion;
    this->enAlertaAmbiental = enAlertaAmbiental;
}
string AdaptadorAmbiental::getEstado() const {
    if (enAlertaAmbiental) {
        return "Alerta Ambiental Critica";
    }
    if (indiceContaminacion >= 70) {
        return "Muy Alto, Alerta Preventiva";
    }
    if (indiceContaminacion > 40) {
        return "Condicion Moderada";
    }
    return "Bajo, Condicion Normal";
}
//Adapter
string AdaptadorAmbiental::obtenerDatos() const {
    stringstream ss;
    ss << "Distrito: " << distrito << "\n";
    ss << "Calidad del Aire: " << calidadAire << "\n";
    ss << "Nivel de Ruido: " << nivelRuido << " \n";
    ss << "Estado de Residuos: " << estadoResiduos << "\n";
    ss << "Indice de ContaminaciOn: " << indiceContaminacion << "\n";
    ss << "Estado Ambiental: " << getEstado() << "\n";
    return ss.str();
}
string AdaptadorAmbiental::getNombreModulo() const {
    return "Modulo Ambiental";
}