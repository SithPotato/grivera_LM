#include <iostream>
using namespace std;

int main() {
    //declaramos las variables
    int suma;
    int i;
    //Le damos el valor de acumulador a la suma
    suma = 0;
    //ciclo buqule  para sumar hasta 10
    for (i = 1; i <= 10; i++)
    {
        suma = suma + i;
    }
    //mostramos el total de la suma
    cout << "La suma de los numeros del 1 al 10 es: "  <<suma  <<endl;
}
