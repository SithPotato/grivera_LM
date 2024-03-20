#include <iostream>
using namespace std;

int main()
{
    double fechadeNacimiento;
    double edad;

    cout <<"Cual es tu fecha de nacimiento?";
    cin >>fechadeNacimiento;

    edad = 2024 - fechadeNacimiento;

    cout <<"La edad de el usuario es:"<<edad <<endl;

    return 0;
}