package com.n0x3u5.basic;

import java.util.Scanner;

public class HelloWorld {
	
	static String greetingLine = "Hello";
	static String personName = "Raktim";
	static String punctuation = "!";
	
	static Scanner userInput = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		System.out.print("Your name: ");
		
		personName = userInput.nextLine();
		
		System.out.println(greetingLine + " " + personName + punctuation);		
	}
}