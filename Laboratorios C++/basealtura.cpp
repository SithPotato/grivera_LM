#include <iostream>

using namespace std;

int main() {
    // Declarar variables para almacenar la base, la altura, el area y el perimetro del rectángulo
    double base, altura, area, perimetro;
    
    // Solicitar al usuario que ingrese la base y la altura del rectángulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    
    // Calcular el area del rectangulo usando la formula area = base * altura
    area = base * altura;
    
    // Calcular el perimetro del rectángulo usando la formula perimetro = 2 * base + 2 * altura
    perimetro = 2 * base + 2 * altura;
    
    // Mostrar el area y el perimetro del rectangulo al usuario
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectngulo es: " << perimetro << endl;
    
    return 0;
}
