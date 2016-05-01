import java.util.Scanner;

public class EmployeeDetails {
  void enterData() {
    System.out.println("enterData invoked.\n");
  }
  void displayData() {
    System.out.println("displayData invoked.\n");
  }
  void exitMenu() {
    System.out.println("exitMenu invoked.\n");
    System.exit(0);
  }
  public static void main(String[] args) {
    int option;

    Scanner scanner = new Scanner(System.in);
    EmployeeDetails eDetails = new EmployeeDetails();

    System.out.println("---------Menu---------\n1. Enter Data\n2. Display Data\n3. Exit\nChoose the option: ");
    option = scanner.nextInt();
    switch (option) {
      case 1:
        eDetails.enterData();
        break;
      case 2:
        eDetails.displayData();
        break;
      case 3:
        eDetails.exitMenu();
        break;
      default:
        System.out.println("Invalid option selected. Exiting...\n");
        System.exit(0);
        break;
    }
  }
}
