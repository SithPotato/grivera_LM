#include <iostream>

using namespace std;

int main() {
    // Declarar variables para almacenar la base, la altura y el área del rectángulo
    double base, altura, area;
    
    // Solicitar al usuario que ingrese la base y la altura del rectángulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    
    // Calcular el area del rectángulo usando la fórmula área = base * altura
    area = base * altura;
    
    // Mostrar el area del rectángulo al usuario
    cout << "El area del rectangulo es: " << area << endl;
    
    return 0;
}