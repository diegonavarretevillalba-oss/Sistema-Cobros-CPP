#ifndef SISTEMACOBROS_H
#define SISTEMACOBROS_H

#include "Cliente.h"
#include "Empleado.h"
#include "Servicio.h"
#include "Pago.h"
#include <iostream>
using namespace std;

class SistemaCobros {
private:
    Cliente clientes[10];
    Empleado empleados[10];
    Servicio servicios[10];

    int totalClientes;
    int totalEmpleados;
    int totalServicios;
public:
    SistemaCobros();

    // agregar elementos
    void agregarCliente(Cliente c);
    void agregarEmpleado(Empleado e);
    void agregarServicio(Servicio s);

    // mostrar
    void mostrarClientes();
    void mostrarEmpleados();
    void mostrarServicios();

    // operaciones
    Cliente* buscarClientePorId(int id);
    bool registrarPago(int clienteId, float monto, string fecha);

    // totales
    float calcularTotalRecaudado();
};

#endif
