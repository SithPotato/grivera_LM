#include <iostream>

using namespace std;

int main() {
    // Declarar variable para almacenar el lado del cuadrado
    double lado, area;
    
    // Solicitar al usuario que ingrese el lado del cuadrado
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    
    // Calcular el area del cuadrado usando la fórmula area = lado * lado
    area = lado * lado;
    
    // Mostrar el área del cuadrado al usuario
    cout << "El area del cuadrado es: " << area << endl;
    
    return 0;
}