import java.util.Scanner;

public class Switch_Vowel {
    public static void main(String[] args) {
        String alpha;
        System.out.println("Enter character to check it is vowel or not:- ");
        Scanner obj = new Scanner(System.in);
        alpha = obj.nextLine();        
             switch (alpha) 
            {

                case "a":
                    System.out.println("This is vowel");
                    break;
                case "A":
                    System.out.println("This is vowel");
                    break;
                case "e":
                    System.out.println("This is vowel");
                    break;
                case "E":
                    System.out.println("This is vowel");
                    break;
                case "i":
                    System.out.println("This is vowel");
                    break;
                case "I":
                    System.out.println("This is vowel");
                    break;
                case "o":
                     System.out.println("This is vowel");
                case "O":
                     System.out.println("This is vowel");
                    break;
                case "u":
                     System.out.println("This is vowel");
                case "U":
                     System.out.println("This is vowel");
                    break;
                default:
                    System.out.println("Input is Consonent");
            }
        }

    }


