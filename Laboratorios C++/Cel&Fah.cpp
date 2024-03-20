#include <iostream>
using namespace std;

int main()
{
    double celsius;
    double fahrenheit;
    
    cout <<"Ingrese la temperatura en grados Celcius:" ;
    cin >>celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout <<"La temperatura ingresada en grados Fahrenheit es equivalente a"<<fahrenheit <<"grados fahrenheit."<<endl;

    return 0;
}