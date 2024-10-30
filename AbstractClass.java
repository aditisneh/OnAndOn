package code;

abstract class Animal {
	   abstract void walk();
	   void breathe() {
	System.out.println("This animal breathes air");
	   }
	   Animal() {
	       System.out.println("You are about to create an Animal.");
	   }
	}


	class Horse extends Animal {
	   Horse() {
	       System.out.println("Wow, you have created a Horse!");
	   }
	   void walk() { //subclass has to implement the base class abstract method.
	       System.out.println("Horse walks on 4 legs");
	   }
	}


	class Chicken extends Animal {
	   Chicken() {
	       System.out.println("Wow, you have created a Chicken!");
	   }
	   void walk() {
	       System.out.println("Chicken walks on 2 legs");
	   }
	}

public class AbstractClass {
	public static void main(String args[]) {
	      Horse horse = new Horse();
	      horse.walk();
	      horse.breathe();
	   }

}
