#include <iostream>
#include <cmath>
using namespace std;

const double PI =3.14;

double calcularAreaCirculo(double radio);

int main()
{
    double radio;

    cout <<"Introduce el radio del circulo: ";
    cin >>radio;

    if (radio < 0)
    {
        cout <<"El radio ingresado no es valido. Por favor, introduce un valor de radio no negativo: ";
    }

    else
    {
        double area = calcularAreaCirculo(radio);

        cout <<"El area del ciculo con radio " << radio << "es: " <<area <<endl;
    }

    return 0;
}

double calcularAreaCirculo(double radio)
{
    return PI * pow(radio, 2);
}




