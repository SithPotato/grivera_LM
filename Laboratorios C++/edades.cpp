#include <iostream>
using namespace std;

int main()
{
    // Declarar variable para almacenar la fecha de nacimiento
    double fechadeNacimiento;
    double edad;
    // Solicitar a el usuaria que ingrese su fecha de nacicimiento
    cout <<"Cual es tu fecha de nacimiento?";
    cin >>fechadeNacimiento;
    // Calcular la edad de el ususario
    edad = 2024 - fechadeNacimiento;
    // Mostrar la edad de el usuario
    cout <<"La edad de el usuario es:"<<edad <<endl;

    return 0;
}