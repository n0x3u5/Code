package org.naksh.java;

public class Player {
	
	//Fields
	private String handleName;
	private int lives, score, level, hitPoints;
	
	//Default Constructor
	public Player() {
		super();
		setHandleName("Unknown_Player");
		setLives(3);
		setScore(0);
		setLevel(1);
		setHitPoints(100);
	}

	
	//Constructor with one argument which sets the handleName
	public Player(String handleName) {
		this();
		setHandleName(handleName);
	}


	//Fully parameterized constructor
	public Player(String handleName, int lives, int score, int level, int hitPoints) {
		this();
		setHandleName(handleName);
		setLives(lives);
		setScore(score);
		setLevel(level);
		setHitPoints(hitPoints);
	}


	//Following are getters and setters for all fields
	public String getHandleName() {
		return handleName;
	}



	public void setHandleName(String handleName) {
		
		//Validation check for the handleName to be over 4 characters long
		if(handleName.length()<4) {
			System.out.println("handleName provided is '" + handleName + "'. It has less than 4 characters.");
			System.out.println("Setting default name '" + this.handleName + "' as provided in default constructor.\n");
		}			
		else
			this.handleName = handleName;
		
	}



	public int getLives() {
		return lives;
	}



	public void setLives(int lives) {
		this.lives = lives;
	}



	public int getScore() {
		return score;
	}



	public void setScore(int score) {
		this.score = score;
	}



	public int getLevel() {
		return level;
	}



	public void setLevel(int level) {
		this.level = level;
	}



	public int getHitPoints() {
		return hitPoints;
	}



	public void setHitPoints(int hitPoints) {
		this.hitPoints = hitPoints;
	}	

}
