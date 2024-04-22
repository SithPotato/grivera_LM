import java.util.Scanner;

public class PromedioTemperaturas {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        float[] temperaturas = new float[12];

        // Variable contador
        int mes = 1;

        // Pedimos las 12 temperaturas a el usuario
        while (mes <= 12) {
            System.out.print("Ingrese la temperatura del mes " + mes + ": ");
            temperaturas[mes - 1] = entrada.nextFloat();
            mes++;
        }

        // Cálculo de la suma de las temperaturas
        float suma = 0;
        for (float temperatura : temperaturas) {
            suma += temperatura;
        }

        // Sacamos el promedio
        float promedio = suma / temperaturas.length;

        // Mostrar el promedio
        System.out.println("El promedio de las temperaturas es: " + promedio);
    }
}