#include <iostream>

using namespace std;

int main() {

    int total_estudiantes;
    float suma_calificaciones;
    float promedio;
    float calificacion;

    cout << "Ingrese la cantidad total de estudiantes en el grupo (no mayor a 10): ";
    cin >> total_estudiantes;

    if (total_estudiantes > 10) {
        cout << "La cantidad de estudiantes no puede ser mayor a 10." << endl;
    }

     suma_calificaciones = 0;
    for (int i = 1; i <= total_estudiantes; ++i) {
        string nombre;
         calificacion;
        cout << "Ingrese el nombre del estudiante " << i << ": ";
        cin >> nombre;
        cout << "Ingrese la calificacinn final de " << nombre << ": ";
        cin >> calificacion;
        suma_calificaciones += calificacion;
    }

     promedio = suma_calificaciones / total_estudiantes;
    cout << "El promedio general del grupo es: " << promedio << endl;

    return 0;
}
