#include "Cliente.h"
#include <iostream>

Cliente::Cliente() : Persona() {
    deuda = 0.0f;
    totalPagos = 0;
    servicioContratado = Servicio();
}

Cliente::Cliente(int id, string nombre, string telefono) : Persona(id, nombre, telefono) {
    deuda = 0.0f;
    totalPagos = 0;
    servicioContratado = Servicio();
}

void Cliente::setDeuda(float d) { deuda = d; }
float Cliente::getDeuda() { return deuda; }

void Cliente::asignarServicio(Servicio s) {
    servicioContratado = s;
    deuda = s.getPrecio(); // asumimos deuda inicial igual al precio del servicio
}

Servicio Cliente::getServicio() {
    return servicioContratado;
}

void Cliente::registrarPago(Pago p) {
    if (totalPagos < 10) {
        pagos[totalPagos] = p;
        totalPagos++;
        deuda -= p.getMonto();
        if (deuda < 0) deuda = 0;
    } else {
        // no más historial (simple)
    }
}

int Cliente::getTotalPagos() {
    return totalPagos;
}

float Cliente::calcularTotalPagosCliente() {
    float suma = 0.0f;
    for (int i = 0; i < totalPagos; i++) suma += pagos[i].getMonto();
    return suma;
}

void Cliente::mostrarInfo() {
    cout << "Cliente -> ";
    Persona::mostrarInfo();
    cout << "Servicio contratado: " << servicioContratado.getNombre() << " | Deuda: $" << deuda << endl;
    if (totalPagos > 0) {
        cout << "Pagos:" << endl;
        for (int i = 0; i < totalPagos; i++) {
            pagos[i].mostrarInfo();
        }
    }
}
