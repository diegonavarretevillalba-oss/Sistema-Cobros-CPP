#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
#include <string>
using namespace std;

class Empleado : public Persona {
private:
    string puesto;
public:
    Empleado();
    Empleado(int id, string nombre, string puesto);

    void setPuesto(string p);
    string getPuesto();

    void mostrarInfo(); // sobrescribe (no virtual para no complicar)
};

#endif
