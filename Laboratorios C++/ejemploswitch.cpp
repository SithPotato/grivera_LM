#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout <<"Bienvenidos a Johanna's Cafe" <<endl;
    cout <<"Menu" <<endl;
    cout <<"1. Cafe" <<endl;
    cout <<"2. Te" <<endl;
    cout <<"3. Chocolate Caliente" <<endl;
    cout <<"4. Jugo de Naranja" <<endl;
    cout <<"-------------------------------" <<endl;
    cout <<"Por favor selecciona tu bebida:" <<endl;
    cin >> opcion;

    switch(opcion)
    {
        case 1: //Cafe
            cout <<"El precio del Cafe es $2.00" <<endl;
            break;
        
        case 2: //Te
            cout <<"El precio del Te es $1.50" <<endl;
            break;
        
        case 3: // Chocolate Caliente
            cout <<"El precio del Chocolate Caliente es %2.50" <<endl;
            break;
        
        case 4: // Jugo de Naranja
            cout <<"El precio del Jugo de Naranja es $3.00" <<endl;
            break;

        default: //En caso de que el usuario ongrese una opcion no valida 
            cout <<"Opcion No valida, Por favor, selecciona una bebida del menu" <<endl;      
    }
        return 0;
}