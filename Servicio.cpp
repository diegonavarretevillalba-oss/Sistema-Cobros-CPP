#include "Servicio.h"

Servicio::Servicio() {
    nombre = "";
    precio = 0.0f;
}

Servicio::Servicio(string nombre, float precio) {
    this->nombre = nombre;
    this->precio = precio;
}

string Servicio::getNombre() { return nombre; }
float Servicio::getPrecio() { return precio; }

void Servicio::mostrarInfo() {
    cout << "Servicio: " << nombre << " | Precio: $" << precio << endl;
}
