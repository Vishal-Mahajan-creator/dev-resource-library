

class First
{
    int x=10;

    class Second
    {
    static int y=5;
    }
    class Third
    {
       public  String name=" Vishal "; 
    }
    class Four
    {
        
        public int four()
        {
            System.out.println("");
            return x;
        }
    }
    private class Five {
        int a = 500;

        int getA() {
            return a;
        }
    }

    public int accessFive() {
        Five fiveObj = new Five();
        return fiveObj.getA();
    }

}
public class InnerClass 
{
    
    public static void main(String[] args) 
    {
        First obj=new First();
        First.Second obj1=obj.new Second();
        First.Third obj2=obj.new Third();
        First.Four obj3=obj.new Four();
      
        System.out.println(obj1.y+obj.x+obj2.name);
        System.out.println("Roll no of student:-"+obj1.y+obj.x+obj2.name);
        System.out.println("Roll no of student:-"+(obj1.y+obj.x)+obj2.name);
        System.out.println(obj3.four());
        System.out.println("Value from private inner class: " + obj.accessFive());
    }
    
}
