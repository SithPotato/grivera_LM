using System;

class CalculadoraSueldo
{
    static void Main()
    {
        const double DESCUENTO = 0.07; // 7% de descuento
        int empleado = 1;
        double horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto;
        double totalPagadoNomina = 0, totalHorasExtra = 0, totalPagadoOvertime = 0;

        do
        {
            Console.Write("Ingrese las horas trabajadas del empleado {0}: ", empleado);
            horasTrabajadas = double.Parse(Console.ReadLine());

            Console.Write("Ingrese el pago por hora del empleado {0}: $", empleado);
            pagoPorHora = double.Parse(Console.ReadLine());

            sueldoBruto = horasTrabajadas * pagoPorHora;
            totalPagadoNomina += sueldoBruto;

            if (horasTrabajadas > 40)
            {
                double horasExtra = horasTrabajadas - 40;
                sueldoBruto += horasExtra * pagoPorHora; // Pago por horas overtime al doble
                totalHorasExtra += horasExtra;
                totalPagadoOvertime += horasExtra * pagoPorHora;
            }

            sueldoNeto = sueldoBruto - (sueldoBruto * DESCUENTO);

            Console.WriteLine("Sueldo bruto del empleado {0}: ${1}", empleado, sueldoBruto);
            Console.WriteLine("Sueldo neto del empleado {0}: ${1}", empleado, sueldoNeto);

            empleado++;
        } while (empleado <= 3);

        Console.WriteLine("\nTotal pagado en nomina: ${0}", totalPagadoNomina - totalPagadoOvertime);
        Console.WriteLine("Total de horas overtime trabajadas: {0} horas", totalHorasExtra);
        Console.WriteLine("Total pagado en horas overtime: ${0}", totalPagadoOvertime);
    }
}
