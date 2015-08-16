import java.io.*;
import java.util.*;

class Moist {

  public static final int COST = 1;

  static int testCases;
  static int numCards;
  static String[] cardName;
  static boolean hasChanged = false;
  static int finalCost = 0;

  static void insertionCount() {
    finalCost = 0;
    for (int i = 1; i < cardName.length; i++) {
      hasChanged = false;
      lexInsertion();
      if (hasChanged) {
        finalCost += COST;
      }
    }
  }

  static void lexInsertion() {
      String temp = "";
      for(int i = 1;i<numCards;i ++) {
          int j = i;
          while (j > 0 && cardName[j].compareTo(cardName[j-1]) < 0) {
            hasChanged = true;
            temp = cardName[j];
            cardName[j] = cardName[j-1];
            cardName[j-1] = temp;
            j --;
          }
      }
  }

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    testCases = Integer.parseInt(input.nextLine());

    for(int i = 1;i<=testCases;i++) {

      numCards = Integer.parseInt(input.nextLine());
      cardName = new String[numCards];

      for(int j=0;j<numCards;j++) {
        cardName[j] = input.nextLine();
      }

      insertionCount();

      System.out.println("Case #" + i + ": " + finalCost);
    }

  }

}
