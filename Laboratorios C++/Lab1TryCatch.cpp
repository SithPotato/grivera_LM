#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout <<"Ingrese un numero entero:";
    cin >>numero;

    try
    {
        if (numero =-0)
        {
           throw "El numero que ustdes ingreso no es de tipo entero";
        } 
        numero =+ 0, "El numero  que usted ingreso es de tipo entero";
    }
    catch(const char* mensaje)
    {
        cout <<"Exapcion capturada" <<mensaje <<endl;
    }
    
    return 0;
    

}