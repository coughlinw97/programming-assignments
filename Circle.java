// William Coughlin

public class Circle {
    private double radius;
    private double PI = 3.14159;
    
    public Circle(){
        
    }
    
    public Circle(double r){
        radius = r;
    }
    
    public void setRadius(double r){
        radius = r;
    }
    
    public double setRadius(){
        return radius;
    }
    
    public double getArea(){
        return (radius * radius) * PI;
    }
    
    public double getDiameter(){
        return radius * 2;
    }
    
    public double getCircumference(){
        return (radius * 2) * PI;
    }
}