#include <iostream>
using namespace std;

int numero01=10;
int numero02=5;

int sumar();
int restar();

int main()
{
    cout <<"Suma de los numeros:" <<sumar() <<endl;
    cout <<"Resta de los numeros:" <<restar() <<endl;
}


int sumar()
{
    return numero01 + numero02;
}

int restar()
{
    return numero01 - numero02;
}