package com.nakshatra.java;

import java.util.ArrayList;

public class Player {
	
	private String handleName;
	private int lives, level, score;
	private Weapon weapon;
	private ArrayList<InventoryItem> inventoryItem;
	
	public Player () {
		
		setHandleName("Unknown Player");
		setLives(3);
		setLevel(1);
		setScore(0);
		setDefaultWeapon();
		inventoryItem = new ArrayList<InventoryItem>();
		
	}
	
	public Player (String handleName, int level, int lives, int score) {
		
		this();
		setHandleName(handleName);
		setLevel(level);
		setLives(lives);
		setScore(score);
		
	}

	private void setDefaultWeapon() {
		
		this.weapon = new Weapon("Sword",10,30);
		
	}
	
	public String getHandleName() {
		
		return handleName;
		
	}
	
	public void setHandleName(String handleName) {
		
		if(handleName.length()<4) {
			System.out.println("Handle too short! Default name used!");
			return;
		}
		
		this.handleName = handleName;
		
	}

	public int getLives() {
		return lives;
	}

	public void setLives(int lives) {
		this.lives = lives;
	}

	public int getLevel() {
		return level;
	}

	public void setLevel(int level) {
		this.level = level;
	}

	public int getScore() {
		return score;
	}

	public void setScore(int score) {
		this.score = score;
	}

	
	public Weapon getWeapon() {
		return weapon;
	}
	

	public void setWeapon(Weapon weapon) {
		this.weapon = weapon;
	}

	public ArrayList<InventoryItem> getInventoryItems() {
		return inventoryItem;
	}

	public void addInventoryItem (InventoryItem inventoryItem) {
		
		this.inventoryItem.add(inventoryItem);
		
	}
	
	public boolean dropInventoryItem (InventoryItem inventoryItem) {
		
		if(this.inventoryItem.contains(inventoryItem)) {
			this.inventoryItem.remove(inventoryItem);
			return true;
		}
		
		return false;
		
	}
	
}
