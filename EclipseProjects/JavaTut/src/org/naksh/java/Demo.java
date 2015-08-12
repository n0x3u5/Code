package org.naksh.java;

public class Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String welcomeMessage = "Welcome to your doom!";
		
		System.out.println("Welcome to Zorpa!" + " " + welcomeMessage);
		
		
		
		System.out.println("\nDEFAULT PLAYER OBJECT:");
		Player naksh = new Player();	//Creating object using Default Constructor
		
		System.out.println("Player name: " + naksh.getHandleName());
		System.out.println("Player health: " + naksh.getHitPoints());
		System.out.println("Player level: " + naksh.getLevel());
		System.out.println("Player lives: " + naksh.getLives());
		System.out.println("Player score: " + naksh.getScore());
		
		
		
		System.out.println("\nPLAYER OBJECT WITH handleName 'Marader' set from constructor:");
		Player mary = new Player("Marader");	//Creating object using Parameterized Constructor with 1 Argument
		
		System.out.println("Player name: " + mary.getHandleName());
		System.out.println("Player health: " + mary.getHitPoints());
		System.out.println("Player level: " + mary.getLevel());
		System.out.println("Player lives: " + mary.getLives());
		System.out.println("Player score: " + mary.getScore());
		
		mary.setHitPoints(400);		//Setting mary Player to have 400 starting hitPoints
		System.out.println("Player health after using setter: " + mary.getHitPoints() + "\n");
		
		
		
		System.out.println("\nFULLY PARAMETERIZED PLAYER OBJECT:");
		Player sayan = new Player("raw",6,40,10,200);		//Creating object using fully Parameterized Constructor
		
		System.out.println("Player name: " + sayan.getHandleName());
		System.out.println("Player health: " + sayan.getHitPoints());
		System.out.println("Player level: " + sayan.getLevel());
		System.out.println("Player lives: " + sayan.getLives());
		System.out.println("Player score: " + sayan.getScore());
		
		sayan.setHandleName("raw_edge");	//Setting sayan Player to have a handlename over 4 characters long
		System.out.println("Player handleName after using setter: " + sayan.getHandleName() + "\n");

	}

}
