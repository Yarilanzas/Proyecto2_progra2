#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <vector>
#include <algorithm>
#include "IObservable.h"
//Big Five Rule: evita fugas de memoria y errores de corrupcin
//Patron Singleton: patron que permite asegurar que una clase tenga una unica instancia 
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
     void agregarReporte(shared_ptr<ReporteBase> reporte);

     void VerificarCriticos();// Al llamar VerificarCriticos(),se notifica a todos los observadores si el reporte es critico. 
     void notificar(shared_ptr<ReporteBase> r) override;

     void guardarEnArchivo(const string& nombreArchivo) const;
     void cargarDesdeArchivo(const string& nombreArchivo);
     
     
};