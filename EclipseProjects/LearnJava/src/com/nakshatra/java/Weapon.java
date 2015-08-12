package com.nakshatra.java;

public class Weapon {

	private String name;
	private int damage, hitPoints;
	
	public Weapon(String name, int damage, int hitPoints) {
		super();
		this.name = name;
		this.damage = damage;
		this.hitPoints = hitPoints;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public int getDamage() {
		return damage;
	}
	
	public void setDamage(int damage) {
		this.damage = damage;
	}
	
	public int getHitPoints() {
		return hitPoints;
	}
	
	public void setHitPoints(int hitPoints) {
		this.hitPoints = hitPoints;
	}
	
	
	
}
