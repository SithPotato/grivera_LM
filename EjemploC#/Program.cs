using System;

class Program {
    static void Main() {
        double num1, num2, media;
        
    Console.Write("Introduzca el primer número: ");
    num1 = Convert.ToDouble(Console.ReadLine());
    Console.Write("Introduzca el segundo número: ");
    num2 = Convert.ToDouble(Console.ReadLine());
   
    media = (num1 + num2) / 2;
    
    Console.WriteLine("La media es: " + media);}}
