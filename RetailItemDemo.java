// William Coughlin

import java.util.Scanner;

public class RetailItemDemo{
    public static void main(String[] args){
        System.out.println("William Coughlin 4/18/2021\n");
        
        Scanner keyboard = new Scanner(System.in);
        
        RetailItem candyBar = new RetailItem("Candy bar", 17789, 0.75, 1.5);
        
        System.out.print(candyBar);
        
        double retail;
        double wholesale;
        
        System.out.print("New wholesale cost: ");
        wholesale = keyboard.nextDouble();
        candyBar.setWholesale(wholesale);
        
        System.out.print("New retail price: ");
        retail = keyboard.nextDouble();
        candyBar.setRetail(retail);
        
        System.out.print(candyBar);
    }
}