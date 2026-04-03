#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include "Servicio.h"
#include "Pago.h"
#include <string>
using namespace std;

class Cliente : public Persona {
private:
    float deuda;
    Servicio servicioContratado;   // sólo 1 servicio para mantener simple
    Pago pagos[10];                 // historial muy simple
    int totalPagos;
public:
    Cliente();
    Cliente(int id, string nombre, string telefono);

    void setDeuda(float d);
    float getDeuda();

    void asignarServicio(Servicio s);
    Servicio getServicio();

    void registrarPago(Pago p);
    int getTotalPagos();
    float calcularTotalPagosCliente();

    void mostrarInfo();
};

#endif
