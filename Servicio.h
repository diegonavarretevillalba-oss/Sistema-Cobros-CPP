#ifndef SERVICIO_H
#define SERVICIO_H

#include <iostream>
#include <string>
using namespace std;

class Servicio {
private:
    string nombre;
    float precio;
public:
    Servicio();
    Servicio(string nombre, float precio);

    string getNombre();
    float getPrecio();

    void mostrarInfo();
};

#endif
