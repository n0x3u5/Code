package com.n0x3u5.ArrayString;

import java.io.*;
import java.util.*;

class UniqueCharChecker {
    private String inputString;

    UniqueCharChecker() {
        inputString = "";
    }

    private boolean hasUniqueChars() {
        return true;
    }

    public void setInputString(String input) {
        inputString = input;
    }

    public String getInputString() {
        return inputString;
    }
}

class StringDriver {

    public static void main(String []args) {
        String inputString;

        Scanner input = new Scanner(System.in);
        UniqueCharChecker checkUnique = new UniqueCharChecker();

        System.out.println("Enter a string: ");
        inputString = input.nextLine();

        checkUnique.setInputString(inputString);

        System.out.println("The input was: " + checkUnique.getInputString());
    }
}
