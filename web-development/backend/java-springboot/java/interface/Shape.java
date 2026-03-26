

interface Shape_A
{
    double getArea();
}
interface  Shape_V
{
    double getVolume();
}
class Circle implements Shape_A
{
    double radius;

    public Circle(double radius) 
    {
        this.radius=radius;
    }
    public double getArea()
    {
        return 3.14*radius*radius;
    }
    
}

class Rectanle implements Shape_A
{
    double length,width;

    public  Rectanle(double length,double width)
    {
        this.length=length;
        this.width=width;
    }
    public double getArea()
    {
        return length*width;
    }
}
class Square implements Shape_A
{
    double side;

    public  Square(double side)
    {
        this.side=side;
    }
    public double getArea()
    {
        return side*side;
    }
}

class Cube implements Shape_V
{
    double side;

    public  Cube(double side)
    {
        this.side=side;
    }
    public double getVolume()
    {
        return side*side*side;
    }
}

class Cone implements Shape_V
{
    double radius,height,volume;

    public  Cone(double radius,double height)
    {
        this.radius=radius;
        this.height=height;
    }
    @Override
    public double getVolume()
    {
        return (1.0 / 3) * Math.PI * Math.pow(radius, 2) * height;
    }
}

class Cuboid implements Shape_V
{
    double length,height,width;

    public  Cuboid(double length,double height,double width)
    {
        this.length=length;
        this.height=height;
        this.width=width;
    }
    @Override
    public double getVolume()
    {
        return length*width * height;
    }
}

class Sphere implements Shape_V
{
    double radius;

    public  Sphere(double radius)
    {
        this.radius=radius;
    }
    @Override
    public double getVolume()
    {
        return (4/3)*3.14*radius*radius*radius;
    }
}
class Shape
{
    public static void main(String[] args) 
    {
        Shape_A c1=new Circle(4);
        Shape_A r1=new Rectanle(4,8);
        Shape_A s1=new Square(9);
        Shape_V cu1=new Cube(5);
        Shape_V co1=new Cone(24,5);
        Shape_V cub1=new Cuboid(24,5,46);
        Shape_V sp1=new Sphere(24);

        System.out.println("Area of circle:-"+c1.getArea());
        System.out.println("Area of Rectangle:-"+r1.getArea());
        System.out.println("Area of Square:-"+s1.getArea());
        System.out.println("Volume of Cube:-"+cu1.getVolume());
        System.out.println("Volume of Cone:-"+co1.getVolume());
        System.out.println("Volume of Cuboid:-"+cub1.getVolume());
        System.out.println("Volume of Spare:-"+sp1.getVolume());

    }
}