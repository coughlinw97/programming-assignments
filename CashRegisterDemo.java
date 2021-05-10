// William Coughlin
import java.util.Scanner;
import java.text.DecimalFormat;

public class CashRegisterDemo
{
   public static void main(String[] args)
   {
      int quantity;     // Quantity being purchased

      System.out.println("William Coughlin 4/25/2021\n");
    
      
      // Create a Scanner object for keyboard input.
      Scanner keyboard = new Scanner(System.in);
      
      // Create a RetailItem object.
      RetailItem item = new RetailItem("Candy bar", 17789,
                                       0.75, 1.5);    
      // Get the quantity.
      System.out.print("How many candy bars are you buying? ");
      quantity = keyboard.nextInt();
      
      // Create a CashRegister object.
      CashRegister reg = new CashRegister(item, quantity);
      
      // Create a DecimalFormat object.
      DecimalFormat dollar = new DecimalFormat("#,##0.00");
      
      // Display the sales data.
      System.out.println("Subtotal : $" +
                         dollar.format(reg.getSubtotal()));
      System.out.println("Sales tax : $" +
                         dollar.format(reg.getTax()));
      System.out.println("Total : $" +
                         dollar.format(reg.getTotal()));
   }
}