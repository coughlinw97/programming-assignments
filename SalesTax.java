// William Coughlin
import java.util.Scanner;

public class SalesTax{
    public static void main(String[] args){
        System.out.println("William Coughlin 2/4/2021");
        
        Scanner keyboard = new Scanner(System.in);
        
        double amount;
        // WC - Creates a constant variable called stateTax
        final float stateTax = 0.055f;
        double stateTaxAmount;
        // WC - Creates a constant variable called countyTax
        final float countyTax = 0.02f;
        double countyTaxAmount;
        double taxTotal;
        double saleTotal;
        
        System.out.print("Enter the purchase amount: ");
        // WC - Assigns input, as a double, to the amount variable
        amount = keyboard.nextDouble();
        
        // WC - Produces formatted output to the console
        System.out.printf("\n%-17s %s %10.2f\n", "Purchase Amount", ": $", amount);
        
        // WC - Assigns the value of amount multiplied by the stateTax constant to the stateTaxAmount variable
        stateTaxAmount = amount * stateTax;
        // WC - Produces formatted output to the console
        System.out.printf("%-17s %s %10.2f\n", "States Sales Tax", ": $", stateTaxAmount);
        
        // WC - Assigns the value of amount multiplied by the countyTax constant to the countyTaxAmount variable
        countyTaxAmount = amount * countyTax;
        // WC - Produces formatted output to the console
        System.out.printf("%-17s %s %10.2f\n", "CountyTaxAmount", ": $", countyTaxAmount);
        
        // WC - Assigns the sum of stateTaxAmount and countyTaxAmount to the taxTotal variable
        taxTotal = stateTaxAmount + countyTaxAmount;
        // WC - Produces formatted output to the console
        System.out.printf("%-17s %s %10.2f\n", "Total Sales Tax", ": $", taxTotal);
        
        // WC - Assigns the sum of amount and taxTotal to the saleTotal variable
        saleTotal = amount + taxTotal;
        // WC - Produces formatted output to the console
        System.out.printf("%-17s %s %10.2f\n", "Total of the Sale", ": $", saleTotal);
    }
}