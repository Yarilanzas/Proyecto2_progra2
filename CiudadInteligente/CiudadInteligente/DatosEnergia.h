#pragma once
#include <string>   
#include <iostream>
#include <vector>

class DatosEnergia {
private:
    std::string nomDistrito;
    double consumoTotal;
    double produccionSolar;
    double produccionTotal;
    int aletarSobreconsumo;
    std::vector<std::string> fuentesRenovables;
    bool enSobreconsumo;

public:
    DatosEnergia(std::string nomDistrito, double consumo, double solar, double produccion, int alertas, bool sobreconsumo);
    std::string getDistrito() const;
    double getConsumoTotal() const;
    double getProduccionSolar() const;
    double getProduccionTotal() const;
    int getAlertas() const;
    bool haySobreconsumo() const;
    std::string getEstado() const;

    void agregarFuenteRenovable(const std::string& fuente);
    std::vector<std::string> getFuentesRenovables() const;




};

