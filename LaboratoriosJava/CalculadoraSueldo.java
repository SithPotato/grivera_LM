import java.util.Scanner;

public class CalculadoraSueldo {
    public static void main(String[] args) {
        final double DESCUENTO = 0.07; // 7% de descuento
        Scanner scanner = new Scanner(System.in);
        int empleado = 1;
        double horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto;
        double totalPagadoNomina = 0, totalHorasExtra = 0, totalPagadoOvertime = 0;

        while (empleado <= 3) {
            System.out.print("Ingrese las horas trabajadas del empleado " + empleado + ": ");
            horasTrabajadas = scanner.nextDouble();

            System.out.print("Ingrese el pago por hora del empleado " + empleado + ": $");
            pagoPorHora = scanner.nextDouble();

            sueldoBruto = horasTrabajadas * pagoPorHora;
            totalPagadoNomina += sueldoBruto;

            if (horasTrabajadas > 40) {
                double horasExtra = horasTrabajadas - 40;
                sueldoBruto += horasExtra * pagoPorHora; // Pago por horas overtime al doble
                totalHorasExtra += horasExtra;
                totalPagadoOvertime += horasExtra * pagoPorHora;
            }

            sueldoNeto = sueldoBruto - (sueldoBruto * DESCUENTO);

            System.out.println("Sueldo bruto del empleado " + empleado + ": $" + sueldoBruto);
            System.out.println("Sueldo neto del empleado " + empleado + ": $" + sueldoNeto);

            empleado++;
        }

        System.out.println("\nTotal pagado en nomina: $" + (totalPagadoNomina - totalPagadoOvertime));
        System.out.println("Total de horas overtime trabajadas: " + totalHorasExtra + " horas");
        System.out.println("Total pagado en horas overtime: $" + totalPagadoOvertime);

        scanner.close();
    }
}
