

public class Overloading 
{
    int sub(int a,int b)
    {
        return a-b;
    }
    float sub(float a,float b)
    {
        return a-b;
    }
    double sub(double a,double b)
    {
        return a-b;
    }
    String sub(String a,String b)
    {
        return a+b;
    }
    public static void main(String[] args) {
      Overloading obj=new Overloading();
        
    System.out.println("int :-"+obj.sub(5, 1));
    System.out.println("float :-"+obj.sub(6f, 90f));
    System.out.println("String :-"+obj.sub("vishal ", "mahajan"));
    
    }
}
