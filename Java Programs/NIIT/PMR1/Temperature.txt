import java.util.Scanner;

public class Temperature {
  public static void main(String[] args) {
    double cTemp, fTemp;
    Scanner scanner = new Scanner(System.in);
    System.out.println("Eneter a temperature in Celcius: ");
    cTemp = scanner.nextDouble();
    System.out.println("Celcius Input: " + cTemp);
    fTemp = cTemp * 1.8 + 32;
    System.out.println("Equivalent Fahrenheit Output: " + fTemp);
  }
}
