// William Coughlin
// WC - Imports Scanner class to program
import java.util.Scanner;

public class MilesPerGallon{
    public static void main(String[] args){
        System.out.println("William Coughlin 1/31/2021");
        
        Scanner keyboard = new Scanner(System.in);
        int milesDriven;
        float gasConsumed, MPG;
        
        // WC - displays "Enter the number of miles you drove: " to the screen
        System.out.println("Enter the number of miles you drove: ");
        // WC - Gets input from user and assigns it as an int to the variable milesDriven
        milesDriven = keyboard.nextInt();
        
        // WC - displays "Enter the amount of gas consumed: " to the screen
        System.out.println("Enter the amount of gas consumed: ");
        // WC - Gets input from user and assigns it as an int to the variable gasConsumed
        gasConsumed = keyboard.nextFloat();
        
        // WC - Divides milesDriven by gasConsumed and assigns it to the MPG variable
        MPG = (milesDriven / gasConsumed);
        
        // WC - Displays "Your miles per gallon is" and the value of MPG to the screen
        System.out.println("Your miles per gallon is " + MPG);
        
    }
}