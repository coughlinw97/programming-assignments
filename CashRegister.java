// William Coughlin

public class CashRegister
{
    private double TAX_RATE = 0.06;
    private double retail;
    private int quantity;
    
    public CashRegister(RetailItem item, int q)
    {
        quantity = q;
        retail = item.getRetail();
    }
    
    public double getSubtotal(){
        return (retail * quantity);
    }
    
    public double getTax(){
        return (getSubtotal() * TAX_RATE);
    }
    
    public double getTotal(){
        return (getSubtotal() + getTax());
    }
}
