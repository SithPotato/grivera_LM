#include <iostream>
using namespace std;

int main()
{
    int tipo_Instrumento;

    cout <<"Ingrese el tipo de instrumento" <<endl;
    cout <<"1. Guitarra" <<endl;
    cout <<"2. Piano" <<endl;
    cout <<"3. Bateria" <<endl;
    cout <<"4. Violin" <<endl;
    cout <<"5. Flauta" <<endl;
    cout <<"--------------------" <<endl;
    cout <<"Porfavor seleccione el instrumento:" <<endl;
    cin >> tipo_Instrumento;

    switch(tipo_Instrumento)
    {
        case 1: //Guitarra
            cout <<"El descuento es de 10%." <<endl;
            break;

        case 2: //Piano
            cout <<"El descuento es de 15%." <<endl;
            break;

        case 3: //Bateria
            cout <<"El descuento es de 20%." <<endl;
            break;

        case 4: //Violin
            cout <<"El descuento es de 12%." <<endl;
            break;

        case 5: // Flauta
            cout <<"El descuento es de 8%." <<endl;
            break;

        default: //En caso de que el usuario ingrese un instrumento que no este
            cout <<"Instrumento no reconocido, Intente de nuevo." <<endl;
    }
        return 0;
    }