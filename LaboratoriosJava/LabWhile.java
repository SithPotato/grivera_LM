import java.util.Scanner;

public class LabWhile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        //Preguntamos a el usuario su nombre
        System.out.print("Ingrese su nombre: ");
        String nombre = scanner.nextLine();
        //Imprimir hola y su nombre 10 veces
        int contador = 0;
        while (contador < 10) {
            System.out.println("Hola " + nombre);
            contador++;
        }

        scanner.close();
    }
}