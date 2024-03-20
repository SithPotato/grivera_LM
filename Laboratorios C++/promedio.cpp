#include <iostream>
using namespace std;

int main()
{
    double examen1;
    double examen2;
    double examen3;
    double examen4;
    double promedio;

    cout <<"Ingrese lo que saco en el examen numero 1:";
    cin >>examen1;
    cout <<"Ingrese lo que saco en el examen numero 2:";
    cin >>examen2;
    cout <<"Ingrese lo que saco en el examen numero 3:";
    cin >>examen3;
    cout <<"Ingrese lo que saco en el examen numero 4:";
    cin >>examen4;

    promedio =  examen1 / examen2 / examen3 / examen4;

    cout <<"El promedio que usted lleva es de"<<promedio <<"%" <<endl;

    return 0;
}