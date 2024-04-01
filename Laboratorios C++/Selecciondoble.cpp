#include <iostream>
using namespace std;

int main() {
    char estadoTarjeta;
    cout << "Ingrese el estado de la tarjeta de biblioteca (a para activa, i para inactiva): ";
    cin >> estadoTarjeta;

    if (estadoTarjeta == 'a') {
        cout << "El usuario puede realizar prestamos." << endl;
    } else {
        cout << "No se permiten prestamos." << endl;
    }

    return 0;
}
