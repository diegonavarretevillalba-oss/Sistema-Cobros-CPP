#ifndef PAGO_H
#define PAGO_H

#include <iostream>
#include <string>
using namespace std;

class Pago {
private:
    float monto;
    string fecha;
public:
    Pago();
    Pago(float monto, string fecha);

    float getMonto();
    string getFecha();

    void mostrarInfo();
};

#endif
