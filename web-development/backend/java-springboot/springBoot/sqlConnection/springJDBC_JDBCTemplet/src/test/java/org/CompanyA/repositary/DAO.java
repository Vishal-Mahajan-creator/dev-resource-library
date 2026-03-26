package org.CompanyA.repositary;

import org.CompanyA.model.Employee;
import org.springframework.jdbc.core.JdbcTemplate;

import javax.swing.*;
import java.util.List;

public class DAO {
    JdbcTemplate jdbcTempleteObj;

    public DAO(JdbcTemplate givenJdbcTemplate){
        this.jdbcTempleteObj=givenJdbcTemplate;
    }

    public void getAllEmployees(){
        //no need to load the driver
    //No need to establish the connection
    //No need to create the statement obj
    //Just skip to Executing SQL query

        String sqlQuerry="select * from employees";

        List<Employee> employeeList=this.jdbcTempleteObj.query("select * from employee",(rs, rowNum)->{
            int id =rs.getInt(1);
            String name=rs.getString(2);
            float  salary=rs.getFloat(3);

            Employee emp=new Employee(id,name,salary);
            return emp;
        });

        //procces the sql result
        for (Employee emp : employeeList) {
            System.out.println("EmpID: " + emp.getEmpID());
            System.out.println("EmpName: " + emp.getEmpName());
            System.out.println("EmpSalary: " + emp.getEmpSalary());
            System.out.println("---------------------------");
        }

        //close the connection
        //you don't need to close the connection.JDBC templet do it for U

        //We are not using try-catch it is done by jdbcTemplet itself

    }

}
