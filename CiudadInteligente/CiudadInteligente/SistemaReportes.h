#pragma once

#include <iostream>
#include <string>

#include <memory>
#include <vector>
#include <algorithm>
#include "IObservable.h"
class SistemaReportes: public IObservable {
private:
    vector<IObservador*> observadores;
    vector<shared_ptr<ReporteBase>> reportes;
    SistemaReportes();// Se aplica singleton 
public:

    // Se aplica Big Five Rule para eliminar copia y movimiento y respetar el singleton 
    ~SistemaReportes()= default;
    SistemaReportes(const SistemaReportes&) = delete;
    SistemaReportes& operator=(const SistemaReportes&) = delete;
    SistemaReportes(SistemaReportes&&) = delete;
    SistemaReportes& operator=(SistemaReportes&&) = delete;


    static SistemaReportes& getInstancia() {
        static SistemaReportes instancia;
        return instancia;
    }
    // void actualizarReporte(shared_ptr<ReporteBase> r)const override;
     void agregarObservador(IObservador* obs) override;
     void eliminarObservador(IObservador* obs) override;
     void notificar(shared_ptr<ReporteBase> r) override;
     void agregarReporte(shared_ptr<ReporteBase> reporte);
     void VerificarCriticos();

    
     
     
};