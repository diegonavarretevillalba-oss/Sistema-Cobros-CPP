#include "SistemaCobros.h"

SistemaCobros::SistemaCobros() {
    totalClientes = 0;
    totalEmpleados = 0;
    totalServicios = 0;
}

void SistemaCobros::agregarCliente(Cliente c) {
    if (totalClientes < 10) {
        clientes[totalClientes] = c;
        totalClientes++;
        cout << "Cliente agregado." << endl;
    } else {
        cout << "Capacidad maxima de clientes alcanzada." << endl;
    }
}

void SistemaCobros::agregarEmpleado(Empleado e) {
    if (totalEmpleados < 10) {
        empleados[totalEmpleados] = e;
        totalEmpleados++;
        cout << "Empleado agregado." << endl;
    } else {
        cout << "Capacidad maxima de empleados alcanzada." << endl;
    }
}

void SistemaCobros::agregarServicio(Servicio s) {
    if (totalServicios < 10) {
        servicios[totalServicios] = s;
        totalServicios++;
        cout << "Servicio agregado." << endl;
    } else {
        cout << "No se pueden agregar mas servicios." << endl;
    }
}

void SistemaCobros::mostrarClientes() {
    if (totalClientes == 0) {
        cout << "No hay clientes." << endl;
        return;
    }
    for (int i = 0; i < totalClientes; i++) {
        cout << "-----------------------" << endl;
        clientes[i].mostrarInfo();
    }
}

void SistemaCobros::mostrarEmpleados() {
    if (totalEmpleados == 0) {
        cout << "No hay empleados." << endl;
        return;
    }
    for (int i = 0; i < totalEmpleados; i++) {
        cout << "-----------------------" << endl;
        empleados[i].mostrarInfo();
    }
}

void SistemaCobros::mostrarServicios() {
    if (totalServicios == 0) {
        cout << "No hay servicios." << endl;
        return;
    }
    for (int i = 0; i < totalServicios; i++) {
        servicios[i].mostrarInfo();
    }
}

Cliente* SistemaCobros::buscarClientePorId(int id) {
    for (int i = 0; i < totalClientes; i++) {
        if (clientes[i].getId() == id) return &clientes[i];
    }
    return NULL;
}

bool SistemaCobros::registrarPago(int clienteId, float monto, string fecha) {
    Cliente* c = buscarClientePorId(clienteId);
    if (c == NULL) {
        cout << "Cliente no encontrado." << endl;
        return false;
    }
    Pago p(monto, fecha);
    c->registrarPago(p);
    cout << "Pago registrado para cliente ID " << clienteId << "." << endl;
    return true;
}

float SistemaCobros::calcularTotalRecaudado() {
    float total = 0.0f;
    for (int i = 0; i < totalClientes; i++) {
        total += clientes[i].calcularTotalPagosCliente();
    }
    return total;
}
