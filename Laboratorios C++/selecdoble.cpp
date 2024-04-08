#include <iostream>
using namespace std;

int main() {
    bool esMiembro;
    int cantidadEntradas;
    double precioPorEntrada = 100.0; // Precio base por entrada
    double descuento = 0.0;

    cout << "¿Es miembro del teatro? (1: Si / 0: No): ";
    cin >> esMiembro;

    cout << "Cantidad de entradas a comprar: ";
    cin >> cantidadEntradas;

    if (esMiembro) {
        if (cantidadEntradas > 5) {
            descuento = 0.15; // 10% de descuento + 5% adicional
        } else {
            descuento = 0.10; // Solo 10% de descuento
        }
    } else {
        if (cantidadEntradas > 10) {
            descuento = 0.05; // 5% de descuento
        }
    }

    double precioTotal = cantidadEntradas * precioPorEntrada * (1 - descuento);
    cout << "El precio total a pagar es: $" << precioTotal << endl;

    return 0;
}
