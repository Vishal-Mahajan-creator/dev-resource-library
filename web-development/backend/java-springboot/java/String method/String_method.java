
import java.util.Scanner;

class String_method
{
    public static void main(String[] args) 
    {
        String name = "VISHAL",name1 = "vishal",lastname = " Mahajan",mystr=" Vishal %s! The number %d person.";
        String str = "Hello, ji,what are you doimg ji";

        char result;
        int result1;
        String result2 ="",result3;
        byte result4[];
        
        
        // String_method = charAt();
        result = name.charAt(0);
        System.out.println(" Charat method:-" + result);

        // String_method = codePoint(); :-Return the Unicode of the first character in a string (the Unicode value of "H" is 72):
        result1 = name.codePointAt(0);
        System.out.println("\n codePointAt at method:-" + result1);

        // String_method = codePointBefore(); :-Return the Unicode of the first character in a string (the Unicode value of "H" is 72):
        result1 = name.codePointBefore(1);
        System.out.println("\n codePointBefore  method:-" + result1);

        // String_method = codePointCount();
        result1 = name.codePointCount(0, 4);
        System.out.println("\n codePointCount  method:-" + result1);
        
        // String_method = compareTo();
        System.out.println("\n compareTo  method:-"+name.compareTo(name1));

        // String_method = compareToIgnoreCase(); :- method compares two strings lexicographically, ignoring lower case and upper case differences.
        System.out.println("\n compareToIgnoreCase  method:-" + name.compareToIgnoreCase(name1));

        // String_method = concat();
        System.out.println("\n concat method:-" + name.concat(lastname));
        
        // String_method = contains();
        System.out.println("\n Contains method:-" + name.contains("VI"));
        System.out.println("\n Example:-" + name1.contains("VI"));

        // String_method = contentEquals();
        System.out.println("\n contentEquals method:-" + name.contentEquals("VI"));
        System.out.println(" contentEquals method:-" + name.contentEquals("VISHAL"));
   
        char name2[] = { 'V', 'I', 'S', 'H', 'A', 'L' };
        // String name3[] = { "VISHAL", " MAHAJAN"};
        // String_method = copyValueOf();
        result2 = result2.copyValueOf(name2, 0, 6);
        // result2 = result2.copyValueOf(name3, 0, 6);
        System.out.println("\n copyValueOf method:-" + result2);

        // String_method = endWith();
        System.out.println("\n emdWith method:-" + name.endsWith("AL"));
        System.out.println(" Example:-" + name.contains("VI"));

        // String_method = equals();
        System.out.println("\n equals method:-" + name.equals(name2));

        // String_method = equalsIgnoreCase();
        System.out.println("\n equalsIgnoreCase method:-" + name.equalsIgnoreCase(lastname));
      
        // String_method = format();
        result3 = String.format(mystr, " is", 1);
        System.out.println("\n format method:-" + result3);
        
        // String_method = getBytes();
        result4=name.getBytes();
        System.out.println("\n getBytes method:-" + result4[0]);

        // String_method = getChars();
        char[] result5={'0','1','2','3','4','5','6','7','8','9'};
        str.getChars(7,9,result5,4);
        System.out.println("\n getChars method:-" + new String(result5));

        // String_method = hashCode();
        System.out.println("\n hashCode method:-" + name.hashCode());

        // String_method = indexOf();
        System.out.println("\n indexOf method:-" + str.indexOf("ji"));

        // String_method = isEmpty();
        System.out.println("\n isEmpty method:-" + name.isEmpty());
        System.out.print(" Example :-" + result2.isEmpty());

        // String_method = join();
        String animal = String.join(" ", "Cat", "Dog", "Lion", "Tiger");
        System.out.println("\n join method:-" + animal);
        
        // String_method = lastIndexOf();
        System.out.println("\n lastIndexOf method:-" + str.lastIndexOf("ji"));

        // String_method = length();
        System.out.println("\n length method:-" + str.length());

        // String_method = matches();
        String relax = "Vishal|Vitthal|Mahajan";
        System.out.println("\n matches method:-" + "Vishal".matches(relax));

        //Task 
        String task = "Jai Shree Ram";
        System.out.println("Enter array index:-");
        Scanner obj = new Scanner(System.in);
        for (int i = 0; i < task.length(); i++) 
        {
            
        }
    }
}