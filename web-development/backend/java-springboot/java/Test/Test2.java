

class Perseon
{
    String name="Vishal;";
    int age=22;

    class School
    {
    String School_name="RMC";
    String School_Adress="Akurdi";

    class Classroom
    {
        String class_name="While loop";
        String Class_Teacher="Mr.Vishal sir";
        int no_of_std=8;

        String Subject,s_grade;
        int Id,s_Id;


        void classroom()
        {
            System.out.println("====Classroom====");
            System.out.println("Class name:-"+class_name);
            System.out.println("Class Teacher:-"+Class_Teacher);
            System.out.println("Class no_of_std-"+class_name);
            System.out.println("Class Total student-"+no_of_std);

        }
        
    }

    }
}
class Teatcher extends Perseon
{
    String sub="Java";
    int emp_id=786;


}
class Student extends Perseon
{
    int std_id=6253;
    String std_grade="A+";

}
class Test2
{
    public static void main(String[] args) 
    {
        Perseon p1=new Perseon();
        Perseon.School Sh1=p1.new School();

        Teatcher t1=new Teatcher();
        Student s1=new Student();
        Perseon.School.Classroom c1=Sh1.new Classroom();

        c1.Subject=t1.sub;
        c1.Id=t1.emp_id;
        c1.s_Id=s1.std_id;
        c1.s_grade=s1.std_grade;

        c1.classroom();
        System.out.println("Teacher Subject:-"+c1.Subject);
        System.out.println("Teacher id:-"+c1.Id);
        System.out.println("Student Id:-"+c1.s_Id);
        System.out.println("Student Grade:-"+c1.s_grade);


    }
}