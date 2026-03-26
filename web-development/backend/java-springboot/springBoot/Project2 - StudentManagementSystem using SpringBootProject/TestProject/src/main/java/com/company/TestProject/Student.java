package com.company.TestProject;

public class Student {
    private int stuId;
    private String stuName;

    public Student(int ID, String name) {
        this.stuId = ID;
        this.stuName = name;
    }

    public int getStuId() { return stuId; }
    public String getStuName() { return stuName; }
}
