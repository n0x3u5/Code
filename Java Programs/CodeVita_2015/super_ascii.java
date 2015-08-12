import java.io.*;
import java.util.Scanner;

class SuperAscii {

  int returnAscii(char inputChar) {
    return ((int)inputChar - 96);
  }

  int countCharOccurence(char currentChar, String inputString) {

    int charCount = 0;

    for( int j=0; j<inputString.length(); j++ ) {
      if( inputString.charAt(j) == currentChar ) {
          charCount++;
      }
    }

    return charCount;

  }

  public static void main(String[] args) {

    String inputString;
    int testCase, asciiVal;
    boolean isSuperAscii = false;

    Scanner userInput = new Scanner(System.in);
    SuperAscii superAsciiObject = new SuperAscii();

    testCase = userInput.nextInt();

    while (testCase != 0) {

      inputString = userInput.next();
      inputString = inputString.toLowerCase();

      for( int i=0; i<inputString.length(); i++ ) {
        char currentChar = inputString.charAt(i);
        int count = superAsciiObject.countCharOccurence(currentChar, inputString);
        if(count == superAsciiObject.returnAscii(currentChar)) {
          isSuperAscii = true;
        } else {
          isSuperAscii = false;
          break;
        }
      }

      if(isSuperAscii) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

      testCase--;
    }

  }

}
