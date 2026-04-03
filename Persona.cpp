#include "Persona.h"

Persona::Persona() {
    nombre = "";
    edad = 0;
}
#include "Persona.h"

Persona::Persona() {
    id = 0;
    nombre = "";
    telefono = "";
}

Persona::Persona(int id, string nombre, string telefono) {
    this->id = id;
    this->nombre = nombre;
    this->telefono = telefono;
}

int Persona::getId() { return id; }
string Persona::getNombre() { return nombre; }
string Persona::getTelefono() { return telefono; }
void Persona::setNombre(string n) { nombre = n; }
void Persona::setTelefono(string t) { telefono = t; }

void Persona::mostrarInfo() {
    cout << "ID: " << id << " | Nombre: " << nombre << " | Telefono: " << telefono << endl;
}
