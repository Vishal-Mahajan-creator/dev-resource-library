public class Array_2D 
{
    public static void main(String[] args) 
    {
        String a[][]={{"A","0","0","0","0"},
                      {"0","B","0","0","0"},
                      {"0","0","C","0","0"},
                      {"0","0","0","D","0"},
                      {"0","0","0","0","E"}};
                      
        String a1[] = { "A", "B", "C", "D" };             
        for(int i=0;i<a.length;i++)
        {
            for(int j= 0; j <a.length;j++) 
            {
                if(i==j)
                {
                    System.out.print(a[i][j]);
                }
                else
                {
                    System.out.print("0");
                }
            }
            System.out.println();
        }   
        System.out.println();
         
        for(int i=0;i<a.length;i++)
        {
            for(int j= 0; j <a.length;j++) 
            {
                if(i==j)
                {
                    System.out.print(a[i][j]);
                }
                else
                {
                    System.out.print("0");
                }
            }
            System.out.println();
        }   
    }   
}
