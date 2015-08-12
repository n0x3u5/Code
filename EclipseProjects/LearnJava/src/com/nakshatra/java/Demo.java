package com.nakshatra.java;

import java.util.ArrayList;

public class Demo {

	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
		
		String blurb = "Welcome to your peril!";
		String startMessage = "Let the games begin.";
		
		Player mary = new Player("Marderer",10,4,20);
		
		System.out.println("Welcome to Horfasia!" + " " + blurb);
		System.out.println(startMessage);
		
		System.out.println("\nPlayer name: " + mary.getHandleName());
		System.out.println("Player level: " + mary.getLevel());
		System.out.println("Player lives:" + mary.getLives());
		System.out.println("Player score:" + mary.getScore());
		System.out.println("Player weapon: " + mary.getWeapon().getName());
		
		Weapon myAxe = new Weapon ("Lunar Axe",200,2000);
		
		System.out.println("\nYou found a new axe. You picked it up!");
		mary.setWeapon(myAxe);
		
		System.out.println("\nPlayer weapon: " + mary.getWeapon().getName());
		
		ArrayList<InventoryItem> allItems = mary.getInventoryItems();
		
		System.out.println("\nInventory content:");
		if(allItems.isEmpty())
			System.out.println("Inventory is empty!");
		else
			for (InventoryItem item : allItems)
				System.out.println(item.getName());
		
		InventoryItem redPotion = new InventoryItem(ItemType.POTION, "Red Potion");
		
		System.out.println("\nYou found a red potion. You picked it up!");
		mary.addInventoryItem(redPotion);
		
		System.out.println("\nYou found a Ring of Protection. You picked it up!");
		mary.addInventoryItem(new InventoryItem(ItemType.RING, "Ring of Protection"));
		
		System.out.println("\nInventory content:");
		for (InventoryItem item : allItems)
			System.out.println(item.getName());
		
		System.out.println("\nYou found a +3 Chest Armor. You picked it up!");
		mary.addInventoryItem(new InventoryItem(ItemType.ARMOR, "+3 Chest Armor"));
		System.out.println("\nInventory content:");
		for (InventoryItem item : allItems)
			System.out.println(item.getName());
		
		boolean wasDeleted = mary.dropInventoryItem(redPotion);
		System.out.println(wasDeleted?"\nAn item was dropped!":"\nNo item was dropped!");
		
		System.out.println("\nInventory content:");
		for (InventoryItem item : allItems)
			System.out.println(item.getName());

	}

}