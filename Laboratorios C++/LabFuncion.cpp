#include <iostream>
using namespace std;

// Declaramos la funcion
float calcularSueldo(float ventas) {
    float porcentaje = 0.15; // 15% de las ventas
    float sueldo = ventas * porcentaje;

    // Aplicamos un ciclo para el bono
    if (ventas >= 1500) {
        sueldo += 125; 
    }

    return sueldo;
}

int main() {
    float ventas;

    // Solicitamos a el usuario las ventas
    cout << "Ingrese el monto de ventas realizadas por el vendedor: $";
    cin >> ventas;

    // Llamamos la funcion
    float sueldoTotal = calcularSueldo(ventas);

    // Le mostramos a el usuario lo que debe pagar
    cout << "El sueldo a pagar al vendedor es: $" << sueldoTotal << endl;

    return 0;
}
