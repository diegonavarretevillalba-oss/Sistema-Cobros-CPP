#include "Empleado.h"
#include <iostream>

Empleado::Empleado() : Persona() {
    puesto = "";
}

Empleado::Empleado(int id, string nombre, string puesto) : Persona(id, nombre, "") {
    this->puesto = puesto;
}

void Empleado::setPuesto(string p) {
    puesto = p;
}

string Empleado::getPuesto() {
    return puesto;
}

void Empleado::mostrarInfo() {
    cout << "Empleado -> ";
    Persona::mostrarInfo();
    cout << "Puesto: " << puesto << endl;
}
