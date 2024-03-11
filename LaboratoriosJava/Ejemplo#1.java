import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double num1, num2, media;
        
        System.out.print("Introduzca el primer número: ");
        num1 = scanner.nextDouble();
        System.out.print("Introduzca el segundo número: ");
        num2 = scanner.nextDouble();
        
        media = (num1 + num2) / 2;
        System.out.println("La media es: " + media);
    }
}