package com.n0x3u5.basic;

import java.util.Scanner;

public class JavaLessonTwo {
	static Scanner userInput = new Scanner(System.in);
	public static void main(String[] main) {
		System.out.print("Your favorite number: ");
		
		if (userInput.hasNextInt()) {
			int numberEntered = userInput.nextInt();
			System.out.println("Your favorite number is: " + numberEntered);
			
			int numEnteredTimesTwo = numberEntered * 2;
			System.out.println(numberEntered + " x 2 = " + numEnteredTimesTwo);
			
			int numEnteredMinusTwo = numberEntered - 2;
			System.out.println(numberEntered + " - 2 = " + numEnteredMinusTwo);
			
			int numEnteredSquared = numberEntered * numberEntered;
			System.out.println(numberEntered + " * " + numberEntered + " = " + numEnteredSquared);
			
			int numEnteredRemainder = numberEntered % 2;
			System.out.println(numberEntered + " % 2 = " + numEnteredRemainder);
			
			int numberAbs = Math.abs(numberEntered);
			System.out.println(numberAbs);
			
		} else {
			System.out.println("Enter an integer value please! Terminating...");
		}
		
	}
}