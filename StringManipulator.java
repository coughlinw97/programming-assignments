// William Coughlin
import java.util.Scanner;

public class StringManipulator {
    public static void main(String[] args){
        System.out.println("William Coughlin 2/5/2021");
        
        Scanner keyboard = new Scanner(System.in);
        
        // WC - Creates a string object called city
        String city;
        
        System.out.print("Enter the name of your favorite city: ");
        city = keyboard.nextLine();
        
        // WC - Creates a variable that stores length of the city string
        int length = city.length();
        
        // WC - Creates a variable the stores the first character of the city string
        char firstChar = city.charAt(0);
        
        // WC - Produces formatted output using the length variable
        System.out.printf("Number of characters: %d\n", length);
        
        // WC - Changes the city string to upper case and outputs it
        System.out.println(city.toUpperCase());
        
        // WC - Changes the city string to lower case and outputs it
        System.out.println(city.toLowerCase());
        
        // WC - Outputs the firstChar variable
        System.out.println(firstChar);
    }
}