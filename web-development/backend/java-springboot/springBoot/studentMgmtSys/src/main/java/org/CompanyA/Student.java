package org.CompanyA;

public class Student{
    int stdId;
    String stuName;

    public Student(int ID ,String Name) {
        this.stuName = Name;
        this.stdId = ID;
    }
    public void showDetails()
    {
        System.out.println("Student id is"+this.stdId+"\nStudent name is:-"+this.stuName);
    }
}