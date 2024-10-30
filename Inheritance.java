package code;

class Stationary{
	String company;
	
	Stationary(String company){
		this.company=company;
		}
	
	 public void printdetails() {
		 System.out.println("Pen company : "+this.company);
	 }
	
}
class Pen extends Stationary{
	String color;
	int quantity;
	
	public Pen(String company,String color,int quantity){
		super(company);
		this.color=color;
		this.quantity=quantity;
	}
	public void printdetails() {
		super.printdetails();
		System.out.println("Pen color : "+this.color+" and quantity is "+this.quantity);
	}
	
}
public class Inheritance {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Pen p1=new Pen("Reynolds","Blue",2);
		//p1.color="Blue";
		//System.out.print(p1.printdetails("Reynolds")+p1.printdetails("Blue",2));
		p1.printdetails();
		//without constructor p1.printdetails(reynolds) again p1.printdetails(blue,2)
		
	}

}
