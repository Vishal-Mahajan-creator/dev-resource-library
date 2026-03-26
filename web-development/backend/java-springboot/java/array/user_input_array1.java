import java.util.Scanner;

public class user_input_array1 {
    public static void main(String[] args) {
        String name[] = new String[6];
        float salary[] = new float[6];
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter up to 6 names and salaries:");

        for (int i = 0; i < name.length; i++) {
            System.out.print("Enter name: ");
            name[i] = obj.nextLine(); // Only one call

            System.out.print("Enter salary: ");
            salary[i] = obj.nextFloat();
            obj.nextLine(); // Consume newline after float input
        }

        System.out.println("\n--- Details ---");
        for (int i = 0; i < name.length; i++) {
            System.out.println("Name: " + name[i]);
            System.out.println("Salary: " + salary[i]);
        }
    }
}
