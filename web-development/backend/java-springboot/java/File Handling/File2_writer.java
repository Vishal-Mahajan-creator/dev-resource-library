
import java.io.*;

public class File2_writer 
{
    
    public static void main(String[] args) 
    {
        try 
        {
            FileWriter obj1=new FileWriter("D:\\Vishal mahajan\\Java\\File Handling\\file1.txt");
            obj1.write("Hye gye jhali file create. \nAni je vachtay tiech lihlay. \nJai shree Ram");
            obj1.close();
            System.out.println("File wrote Succesfully.");
        } 
        catch (IOException e)
        {
            System.out.println("An error is occcure");
            e.printStackTrace();
        }
    }
       
}
