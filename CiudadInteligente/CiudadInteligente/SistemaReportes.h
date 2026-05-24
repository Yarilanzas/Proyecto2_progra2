#pragma once

#include <iostream>
#include <string>

#include <memory>
#include <vector>
#include <algorithm>
#include "IObservable.h"
class SistemaReportes: public IObservable {
private:
    vector<IObservador> observadores;
    vector<shared_ptr<ReporteBase>> reportes;
    SistemaReportes();
public:
    SistemaReportes(const SistemaReportes&) = delete;
    SistemaReportes& operator=(const SistemaReportes&) = delete;

    static SistemaReportes& getInstancia() {
        static SistemaReportes instancia;
        return instancia;
    }
    // void actualizarReporte(shared_ptr<ReporteBase> r)const override;
     void agregarObservador(IObservador* obs)const override;
     void eliminarObservador(IObservador* obs)const override;
     void notificar() override;

     void agregarReporte(shared_ptr<ReporteBase> reporte);
};