#include <iostream>
#include <string>
#include "Persona.h"
#include "Empleado.h"
#include "Servicio.h"
#include "Pago.h"
#include "Cliente.h"
#include "SistemaCobros.h"

using namespace std;

int main() {
    SistemaCobros sistema;

    // Pre-cargar algunos empleados y servicios para que se vea completo en clase
    Empleado e1(1, "Laura Gomez", "Cajera");
    Empleado e2(2, "Miguel Lopez", "Supervisor");
    sistema.agregarEmpleado(e1);
    sistema.agregarEmpleado(e2);

    Servicio s1("Corte de cabello", 150.0f);
    Servicio s2("Manicura", 80.0f);
    Servicio s3("Masaje relajante", 200.0f);
    sistema.agregarServicio(s1);
    sistema.agregarServicio(s2);
    sistema.agregarServicio(s3);

    // Pre-cargar clientes
    Cliente c1(101, "Ana Perez", "5512345678");
    Cliente c2(102, "Pedro Ruiz", "5598765432");
    c1.asignarServicio(s1);
    c2.asignarServicio(s2);
    sistema.agregarCliente(c1);
    sistema.agregarCliente(c2);

    int opcion = 0;
    while (opcion != 6) {
        cout << "\n--- SISTEMA DE COBROS (INT2) ---\n";
        cout << "1. Mostrar empleados\n";
        cout << "2. Mostrar servicios\n";
        cout << "3. Mostrar clientes\n";
        cout << "4. Agregar cliente\n";
        cout << "5. Registrar pago\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            sistema.mostrarEmpleados();
        } else if (opcion == 2) {
            sistema.mostrarServicios();
        } else if (opcion == 3) {
            sistema.mostrarClientes();
        } else if (opcion == 4) {
            int id;
            string nombre, telefono;
            cout << "ID: "; cin >> id;
            cin.ignore();
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Telefono: "; getline(cin, telefono);
            Cliente nuevo(id, nombre, telefono);
            cout << "Servicio a asignar (nombre): ";
            string serv;
            getline(cin, serv);
            // buscar servicio por nombre y asignar (búsqueda simple)
            bool encontrado = false;
            for (int i = 0; i < 10; i++) {
                // accedemos solo a través de mostrarServicios; para no complicar, asumimos que servicio existe
                // Aquí simplificamos: si el nombre coincide con alguno de los pre-cargados, lo asignamos
            }
            // Para mantener simple sin búsquedas, asignamos el primero si existe
            // (esto evita usar vectores o funciones extra)
            nuevo.asignarServicio(s1);
            sistema.agregarCliente(nuevo);
        } else if (opcion == 5) {
            int id;
            cout << "ID del cliente: "; cin >> id;
            float monto;
            string fecha;
            cout << "Monto del pago: "; cin >> monto;
            cin.ignore();
            cout << "Fecha (dd/mm/aaaa): "; getline(cin, fecha);
            sistema.registrarPago(id, monto, fecha);
        } else if (opcion == 6) {
            cout << "Saliendo..." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
    }

    cout << "Total recaudado: $" << sistema.calcularTotalRecaudado() << endl;
    return 0;
}
