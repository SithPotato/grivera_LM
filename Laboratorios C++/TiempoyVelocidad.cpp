#include <iostream>
using namespace std;

int main()
{
    double tiempo;
    double velocidad;
    double distancia;

    cout <<"Ingrese el tiempo de su vuelo";
    cin >>tiempo;
    cout <<"Ingrese la velocidad en promedio que recorria";
    cin >> velocidad;

    distancia = velocidad * tiempo;

    cout <<"La distancia recorida en promedio es"<< distancia <<endl;

    return 0;
}