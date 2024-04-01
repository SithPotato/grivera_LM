using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Ingrese los años de antigüedad del empleado:");
        int antiguedad = Convert.ToInt32(Console.ReadLine());

        if (antiguedad >= 5)
        {
            Console.WriteLine("El empleado es elegible para recibir un bono de $1000.");
        }
        if (antiguedad < 5)
        {
            Console.WriteLine("El empleado no es elegible para recibir el bono.");
        }
    }
}
