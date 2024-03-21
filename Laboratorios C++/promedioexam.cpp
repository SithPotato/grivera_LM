#include <iostream>

using namespace std;

int main() {
    // Declarar variables para almacenar las calificaciones de los exámenes
    double examen1; 
    double examen2; 
    double examen3; 
    double examen4;
    
    // Solicitar al usuario que ingrese las calificaciones de los exámenes
    cout << "Ingrese la calificacion del examen 1: ";
    cin >> examen1;
    
    cout << "Ingrese la calificacion del examen 2: ";
    cin >> examen2;
    
    cout << "Ingrese la calificacion del examen 3: ";
    cin >> examen3;
    
    cout << "Ingrese la calificacion del examen 4: ";
    cin >> examen4;
    
    // Calcular el promedio final sumando las calificaciones y dividiendo entre 4
    double promedio = (examen1 + examen2 + examen3 + examen4) / 4.0;
    
    // Mostrar el promedio final al usuario
    cout << "El promedio final es: " << promedio << endl;
    
    return 0;
}
