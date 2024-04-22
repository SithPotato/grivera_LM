#include <iostream>
using namespace std;

        //Declaramos variables globales
int numero01=10;
int numero02=5;
        //Declaracion de funciones
int sumar();
int restar();
        //Definicion de Declaracion
int main()
{
    cout <<"Suma de los numeros:" <<sumar() <<endl;
    cout <<"Resta de los numeros:" <<restar() <<endl;
}

        //Definicion de funciones
int sumar()
{
    return numero01 + numero02;
}

int restar()
{
    return numero01 - numero02;
}