#include <iostream>
using namespace std;

int main() {
    int antiguedad;
    cout << "Ingrese los años de antigüedad del empleado: ";
    cin >> antiguedad;

    if (antiguedad < 5) {
        cout << "El empleado no es elegible para recibir el bono." << endl;
        return 0; // Finaliza el programa si el empleado no es elegible
    }

    cout << "El empleado es elegible para recibir un bono de $1000." << endl;

    return 0;
}

