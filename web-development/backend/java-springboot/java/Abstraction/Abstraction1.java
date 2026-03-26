abstract  class Shape
{
    String color;
    abstract double getarea();

    void  setColour(String color)
    {
        this.color=color;
    }

    String getcolor()
    {
        return color;
    }
}
class Circle extends Shape
{
    double radius;

    public Circle(double radius,String color)
    {
        this.radius=radius;
        setColour(color);
    }
    @Override
    double getarea()
    {
        return 3.14*radius*radius;
    }
}
class Rectangle extends Shape
{
    double length;
    double height;
    public Rectangle(double length,double height,String color)
    {
        this.length=length;
        this.height=height;
        setColour(color);
    }
    @Override
    double getarea()
    {
        return length*height;
    }
}
public class Abstraction1 
{
    public static void main(String[] args) 
    {
        Circle c1=new Circle(5, "red");
        Rectangle r1=new Rectangle(6, 8, "blue");

        System.out.println("area of Circle :-"+c1.getarea());
        System.out.println("  Circle  color:-"+c1.getcolor());
        System.out.println("area of Rectangle :-"+r1.getarea());
        System.out.println("Rectangle colour:-"+r1.getcolor());
    }
}
