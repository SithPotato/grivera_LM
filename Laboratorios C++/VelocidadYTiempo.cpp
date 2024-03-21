#include <iostream>

using namespace std;

int main() {
    // Declarar variables para almacenar la velocidad y el tiempo de viaje
    double velocidad, tiempo, distancia;
    
    // Solicitar al usuario que ingrese la velocidad y el tiempo de viaje
    cout << "Ingrese la velocidad promedio (en km/h): ";
    cin >> velocidad;
    
    cout << "Ingrese el tiempo de viaje (en horas): ";
    cin >> tiempo;
    
    // Calcular la distancia total recorrida usando la fórmula distancia = velocidad * tiempo
    distancia = velocidad * tiempo;
    
    // Mostrar la distancia total recorrida al usuario
    cout << "La distancia total recorrida es: " << distancia << " km" << endl;
    
    return 0;
}