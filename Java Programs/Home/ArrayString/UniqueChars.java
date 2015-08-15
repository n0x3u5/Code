import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

class SimpleUniqueCharChecker {

    protected String inputString;
    protected int strLen;

    SimpleUniqueCharChecker() {
        inputString = "";
    }

    public boolean hasUniqueChars() {
        //Assuming ASCII characters. Not Unicode.
        boolean[] charExists = new boolean[256];
        for (int i = 0;i < inputString.length();i ++ ) {
            int currentAscii = inputString.charAt(i);
            if(charExists[currentAscii]) {
                return false;
            }
            charExists[currentAscii] = true;
        }
        return true;
    }

    public void setInputString(String input) {
        inputString = input;
        strLen = inputString.length();
    }

    public String getInputString() {
        return inputString;
    }

}

class BruteUniqueCharChecker extends SimpleUniqueCharChecker {
    public boolean hasUniqueChars() {
        for (int i=0;i < strLen;i++) {
            for (int j=i+1;j < strLen;j++) {
                if(inputString.charAt(i)==inputString.charAt(j)) {
                    return false;
                }
            }
        }
        return true;
    }
}

class SortedUniqueCharChecker extends SimpleUniqueCharChecker {

    void insertIntArray(int[] intArray, char[] charArray) {
        for(int i = 0;i<strLen;i ++) {
            intArray[i] = (int)charArray[i];
        }
    }

    void insertCharArray(int[] intArray, char[] charArray) {
        for(int i = 0;i<strLen;i ++) {
            charArray[i] = (char)intArray[i];
        }
    }

    void sortChars(int[] intArray) {

        for(int i = 1;i<strLen;i ++) {
            int j = i;
            while (j > 0 && intArray[j-1] > intArray[j]) {
                intArray[j] = intArray[j] + intArray[j-1];
                intArray[j-1] = intArray[j] - intArray[j-1];
                intArray[j] = intArray[j] - intArray[j-1];
                j --;
            }
        }

    }

    public boolean hasUniqueChars() {

        int[] intArray = new int[strLen];
        char[] charArray = inputString.toCharArray();

        insertIntArray(intArray, charArray);

        sortChars(intArray);

        insertIntArray(intArray, charArray);

        for(int i = 0;i<strLen-1;i ++) {
            if(charArray[i] == charArray[i+1]) {
                return false;
            }
        }
        return true;

    }

}

class StringDriver {

    public static void main(String[] args) {
        String inputString;

        Scanner input = new Scanner(System.in);
        SimpleUniqueCharChecker checkSimpleUnique = new SimpleUniqueCharChecker();
        SortedUniqueCharChecker checkSortedUnique = new SortedUniqueCharChecker();
        BruteUniqueCharChecker checkBruteUnique = new BruteUniqueCharChecker();

        System.out.print("\nEnter a string: ");
        inputString = input.nextLine();

        checkSimpleUnique.setInputString(inputString);
        checkSortedUnique.setInputString(inputString);
        checkBruteUnique.setInputString(inputString);

        System.out.println("\n---------------------------------------");
        System.out.println("Via SimpleUniqueChars:");
        if(checkSimpleUnique.hasUniqueChars()) {
            System.out.println("The string has all unique characters.");
        } else {
            System.out.println("The string has non - unique characters.");
        }
        System.out.println("---------------------------------------");

        System.out.println("Via SortedUniqueChars:");
        if(checkSortedUnique.hasUniqueChars()) {
            System.out.println("The string has all unique characters.");
        } else {
            System.out.println("The string has non - unique characters.");
        }
        System.out.println("---------------------------------------");

        System.out.println("Via BruteUniqueChars:");
        if(checkBruteUnique.hasUniqueChars()) {
            System.out.println("The string has all unique characters.");
        } else {
            System.out.println("The string has non - unique characters.");
        }
        System.out.println("---------------------------------------");
    }

}
