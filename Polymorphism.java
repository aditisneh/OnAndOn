package code;

class Animals {
    // Virtual method (dynamically bound at runtime)
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animals {
    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

class Cat extends Animals {
    @Override
    void sound() {
        System.out.println("Cat meows");
    }
}

public class Polymorphism {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Animals myDog = new Dog();
	        Animals myCat = new Cat();

	        // Calls the overridden methods based on the actual object type (Dog, Cat)
	        myDog.sound(); // Output: Dog barks
	        myCat.sound(); // Output: Cat meows

	}

}
