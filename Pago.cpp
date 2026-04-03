#include "Pago.h"

Pago::Pago() {
    monto = 0.0f;
    fecha = "";
}

Pago::Pago(float monto, string fecha) {
    this->monto = monto;
    this->fecha = fecha;
}

float Pago::getMonto() { return monto; }
string Pago::getFecha() { return fecha; }

void Pago::mostrarInfo() {
    cout << "Pago -> Fecha: " << fecha << " | Monto: $" << monto << endl;
}
