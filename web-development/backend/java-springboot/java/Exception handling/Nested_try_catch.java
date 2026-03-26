public class Nested_try_catch 
{
    public static void main(String[] args)
    {
        int a=10;
        int b=0;
        String s="Vishal";
      try 
      {
        // System.out.println("Outer try");
        try 
        {
            // System.out.println("Inner try");
            int result=a/b;
            System.out.println("Result:-"+result);
        } 

        catch (ArithmeticException e) 
        {
            System.out.println("Number can't divided by zero");
        }

        int length=s.length();
        System.out.println("\nLenth of string:-"+length);
        
      } 

      catch (NullPointerException  e) 
      {
            System.out.println("Caught NullPointerException: Cannot get length of a null string.");
      }  
    }
}
