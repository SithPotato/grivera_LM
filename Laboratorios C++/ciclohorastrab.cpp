#include <iostream>
using namespace std;

int main() {
    const double DESCUENTO = 0.07; // 7% de descuento
    double horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto;
    double totalPagadoNomina = 0, totalHorasExtra = 0, totalPagadoOvertime = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese las horas trabajadas del empleado " << (i + 1) << ": ";
        cin >> horasTrabajadas;

        cout << "Ingrese el pago por hora del empleado " << (i + 1) << ": $";
        cin >> pagoPorHora;

        sueldoBruto = horasTrabajadas * pagoPorHora;
        totalPagadoNomina += sueldoBruto;

        if (horasTrabajadas > 40) {
            double horasExtra = horasTrabajadas - 40;
            sueldoBruto += horasExtra * pagoPorHora; // Pago por horas overtime al doble
            totalHorasExtra += horasExtra;
            totalPagadoOvertime += horasExtra * pagoPorHora;
        }

        sueldoNeto = sueldoBruto - (sueldoBruto * DESCUENTO);

        cout << "Sueldo bruto del empleado " << (i + 1) << ": $" << sueldoBruto << endl;
        cout << "Sueldo neto del empleado " << (i + 1) << ": $" << sueldoNeto << endl;
    }

    cout << "\nTotal pagado en nomina: $" << totalPagadoNomina - totalPagadoOvertime << endl;
    cout << "Total de horas overtime trabajadas: " << totalHorasExtra << " horas" << endl;
    cout << "Total pagado en horas overtime: $" << totalPagadoOvertime << endl;

    return 0;
}
