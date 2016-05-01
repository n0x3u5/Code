import java.util.Scanner;

public class GroceryDetails {
  int weight;

  GroceryDetails(int weight) {
    this.weight = weight;
  }

  void addWeight() {
    ++weight;
  }
  void removeWeight() {
    if (weight != 0) {
      --weight;
    } else {
      System.out.println("Grocery bag is empty! Can't remove any more weight.\n");
    }
  }
  void displayWeight() {
    System.out.println("The weight is " + weight + " kg.\n");
  }

  public static void main(String[] args) {
    int option, weight;
    Scanner scanner = new Scanner(System.in);
    GroceryDetails gDetails = new GroceryDetails(0);
    while (true) {
      System.out.println("---------Menu---------\n1. Add weight\n2. Remove weight\n3. Display weight\n4. Exit\nChoose an option: ");
      option = scanner.nextInt();
      switch (option) {
        case 1:
          gDetails.addWeight();
          break;
        case 2:
          gDetails.removeWeight();
          break;
        case 3:
          gDetails.displayWeight();
          break;
        case 4:
          System.out.println("Exiting...\n");
          System.exit(0);
          break;
        default:
          System.out.println("Invalid option selected. Try again.\n");
          break;
      }
    }
  }
}
