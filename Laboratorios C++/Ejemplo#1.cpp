#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string cadena;

    cout <<"Ingrese una cadena de caracteres:" ;
    //cin ignore();
    getline(cin,cadena);

    cout<<"Los datos entrados previamente son:"<<cadena<< endl;

    return 0;
}