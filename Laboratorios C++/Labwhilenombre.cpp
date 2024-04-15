#include <iostream>
using namespace std;

int main() {
    string nombre;

  // Preuntarle a el usuario su nombre
  cout << "Ingrese su nombre: ";
  cin >> nombre;

  // Imprimir hola y el nombre 10 veces
  for (int i = 0; i < 10; ++i) {
    cout << "Hola " << nombre << endl;
  }

  return 0;
}