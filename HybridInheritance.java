package code;

class Shapes {
    public void area() {
        System.out.println("Displays Area of Shape");
    }
}

// Interface for color functionality
interface Colorable {
    void setColor(String color);
    String getColor();
}

// Derived class Triangle from Shape
class Triangles extends Shapes{
    // Method to calculate area of a triangle
    public void area(int h, int b) {
        System.out.println("Triangle Area: " + (0.5) * b * h);
    }
}

// Further derived class ColoredTriangle from Triangle
class ColoredTriangle extends Triangles implements Colorable {
    private String color;

    // Method to set the color
    @Override
    public void setColor(String color) {
        this.color = color;
    }

    // Method to get the color
    @Override
    public String getColor() {
        return color;
    }

    // Method to calculate area of the colored triangle
    public void area() {
        double area = (Math.sqrt(3) / 4) * (2 * 2); // Example with side = 2
        System.out.println("Colored Triangle Area: " + area);
    }
}

public class HybridInheritance {

	public static void main(String[] args) {
		        Shapes s1 = new Shapes();
		        s1.area();

		        Triangles t1 = new Triangles();
		        t1.area(12, 2); // Calls Triangle's area method

		        ColoredTriangle ct = new ColoredTriangle();
		        ct.setColor("Blue"); // Set color
		        System.out.println("Colored Triangle color: " + ct.getColor());
		        ct.area(); // Calls ColoredTriangle's area method

	}

}
