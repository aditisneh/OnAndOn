package code;
interface Vehicle {
    // Abstract method (implicitly public and abstract)
    void start();

    // Default method (since Java 8)
    default void stop() {
        System.out.println("Vehicle stopped.");
    }
}

class Car implements Vehicle {
    @Override
    public void start() {
        System.out.println("Car started");
    }
}

class Bike implements Vehicle {
    @Override
    public void start() {
        System.out.println("Bike started");
    }
}

public class Interfaces {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Vehicle c=new Car();
		Vehicle b=new Bike();
		c.stop();
		c.start();
		b.start();
	
		
	}

}
