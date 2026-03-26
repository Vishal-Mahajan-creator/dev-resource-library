package org.CompanyA.model;

public class Employee {
    int empID;
    String empName;
    float empSalary;

    public Employee (int id,String name,float salary){
        this.empID=id;
        this.empName=name;
        this.empSalary=salary;
    }

    public int getEmpID() {
        return empID;
    }

    public void setEmpID(int empID) {
        this.empID = empID;
    }

    public String getEmpName() {
        return empName;
    }

    public void setEmpName(String empName) {
        this.empName = empName;
    }

    public float getEmpSalary() {
        return empSalary;
    }

    public void setEmpSalary(float empSalary) {
        this.empSalary = empSalary;
    }
}