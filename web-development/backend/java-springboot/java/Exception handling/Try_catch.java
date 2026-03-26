class Try_catch
{
    public static void main(String[] args) 
    {
        int a=10;
        int b=0;
        try
        {
            int result=a/b;
            System.out.println("Result:-"+result);
        }
        catch (Exception e)
        {
            System.out.println("Number can't divided by zero");
        }
        finally
        {
            System.out.println("Alwas execute the finally block");
        }
    }
}