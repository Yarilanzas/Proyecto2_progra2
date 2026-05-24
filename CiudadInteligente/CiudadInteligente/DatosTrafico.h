#pragma once
#include <string>
#include <vector>

class DatosTrafico {
private:
    std::string zona;
    int vehiculoDetectados;
    double velocidadPromedio;
    int semaforosInteligentes;
    int incidentesReportados;
    std::vector<std::string> zonasCongestion;
    bool enAltaCongestion;
public: 
    DatosTrafico(const std::string& zona, int vehiculoDetectados, double velocidadPromedio, int semaforosInteligentes, int incidentesReportados,bool enAltaCongestion);
    std::string getZona() const;
    int getVehiculosDetectados() const;
    double getVelocidadPromedio() const;
    int getSemaforos() const;
    int getIncidentes() const;
    bool enAltacongestion() const;
    std::string getEstado() const;

    void agregarZonaCongestion(const std::string& zona);
    std::vector<std::string> getZonasCongestion() const;

};

