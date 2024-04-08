import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese el estado de la tarjeta de biblioteca (activa/inactiva): ");
        String estadoTarjeta = scanner.nextLine();

        if (estadoTarjeta.equals("activa")) {
            System.out.println("El usuario puede realizar préstamos.");
        }
        if (!estadoTarjeta.equals("activa")) {
            System.out.println("No se permiten préstamos.");
        }

        scanner.close();
    }
}

