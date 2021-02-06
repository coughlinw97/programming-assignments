// William Coughlin
import java.util.Scanner;

public class CircleDemo {
    public static void main(String[] args){
        System.out.println("William Coughlin 2/5/2021");
        
        Scanner keyboard = new Scanner(System.in);
        
        // WC - Creates new Circle object
        Circle circle = new Circle();
        
        System.out.print("\nEnter the radius of the circle: ");
        
        // WC - Uses setRadius method to set radius of circle
        circle.setRadius(keyboard.nextDouble());
        
        // WC - Gets area of circle and prints it
        System.out.println("The circle's area is " + circle.getArea());
        
        // WC - Gets diameter of circle and prints it
        System.out.println("The circle's diameter is " + circle.getDiameter());
        
        // WC - Gets circumference of circle and prints it
        System.out.println("The circle's circumference is " + circle.getCircumference());
    }
}