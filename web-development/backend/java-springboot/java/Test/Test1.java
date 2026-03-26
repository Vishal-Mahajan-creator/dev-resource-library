
import java.util.Scanner;

class Person
{
    String name;
    int age;
    Scanner sc = new Scanner(System.in);

    public Person() 
    {
        System.out.println("Enter following information");
        
        System.out.println("Enter name:-");
        name=sc.nextLine();
        System.out.println("Enter age:-");
        age=sc.nextInt();
        sc.nextLine();
    }
    public  void displayInfo()
    {
       
        System.out.println("\n\nYour information");
        System.out.println("Your name:-"+name);
        System.out.println("Your age:-"+ age);
    }

class Student 
{
    int stud_id;
    public Student()
    {
        System.out.print("\nEnter student ID: ");
        stud_id = sc.nextInt();
        sc.nextLine();
    }
    public void displayStudentInfo() 
    {
        System.out.println("\n\nStudent ID: " + stud_id);
        System.out.println("Student  name:-"+name);
        System.out.println("Student  age:-"+ age);
      
        
    }
    class Course
    {
        String course_name;
        int course_Id;
       
    public void displayCourseInfo() 
    {
        System.out.println("\nEnter course name:-");
        course_name=sc.nextLine();
        System.out.println("Enter course Id:-");
        course_Id=sc.nextInt();
        sc.nextLine();

        System.out.println("\n\nCourse name:-"+course_name);
        System.out.println("Course Id:-"+course_name);
    }
    }
}
}
class Test1
{
    public static void main(String[] args) 
    {
        Person obj0=new Person();
        Person.Student obj =obj0.new Student();
        Person.Student.Course obj1=obj.new Course();
        
        obj0.displayInfo();
        obj.displayStudentInfo();
        obj1.displayCourseInfo();
    }
}