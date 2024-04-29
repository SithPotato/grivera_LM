#include <iostream>
using namespace std;

// Variable global para almacenar el sueldo total
double sueldo_total = 0;

// Función para calcular el sueldo en base a las ventas
double calcular_sueldo(double ventas) {

    
// Variable local para almacenar la comisión
  double comision = ventas * 0.15;

  // Se calcula el sueldo total sumando la comisión al sueldo_total global
  sueldo_total += comision;

  return sueldo_total;
}

int main() {

  double ventas_realizadas;
    //Preguntamos a el usuario el total de ventas
  cout << "Ingrese el monto total de las ventas: ";
  cin >> ventas_realizadas;

  // Se calcula y muestra el sueldo utilizando la función
  double sueldo_final = calcular_sueldo(ventas_realizadas);

  cout << "El sueldo total del vendedor es: $" << sueldo_final << endl;

  return 0;
}
