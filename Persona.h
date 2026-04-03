#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    int id;
    string nombre;
    string telefono;
public:
    Persona();
    Persona(int id, string nombre, string telefono);

    
    int getId();
    string getNombre();
    string getTelefono();
    void setNombre(string n);
    void setTelefono(string t);

    
    void mostrarInfo();
};

#endif
