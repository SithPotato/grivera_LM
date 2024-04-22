#include <iostream>
using namespace std;

int main() {
  // Arreglo para almacenar las 12 temperaturas
  float temperaturas[12];

  // Le pedimos a el ususario las 12 temperaturas
  for (int i = 0; i < 12; i++) {
    cout << "Ingrese la temperatura del mes " << i + 1 << ": ";
    cin >> temperaturas[i];
  }

  // Sumamos las temperaturas
  float suma = 0;
  for (int i = 0; i < 12; i++) {
    suma += temperaturas[i];
  }

  // Sacar el promedio de temperatura
  float promedio = suma / 12.0; // Usar 12.0 para resultado decimal

  // Mostrar el promedio
  cout << "El promedio de las temperaturas es: " << promedio << endl;

  return 0;
}

