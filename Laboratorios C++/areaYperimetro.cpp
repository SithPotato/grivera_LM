#include <iostream>
using namespace std;

int main()
{
 double altura;
 double base;
 double area;
 double perimetro;

    cout <<"Ingrese la altura de el rectangulo:";
    cin >>altura;

    cout <<"Ingrese la base de el rectangulo:";
    cin >>base;

    area = base * altura;
    perimetro = base + altura;

    cout <<"el perimtro de el rectangulo es" <<perimetro <<endl;
    
    return 0;
}