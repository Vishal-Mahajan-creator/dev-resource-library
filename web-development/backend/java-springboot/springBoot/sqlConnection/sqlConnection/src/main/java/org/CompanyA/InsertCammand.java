package org.CompanyA;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class InsertCammand {
    public void addStudent(){

        try {
            //load and register the driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            //establish connection
            String url = "jdbc:mysql://localhost:3306/dql";
            String username = "root";
            String passward = "Root@123";

            //connect to database
            Connection connectionobj= DriverManager.getConnection(url,username,passward);
            System.out.println("Database connected successfully!");

            //create sql statement
            Statement stateObj=connectionobj.createStatement();

            //execute sql query
            String query="insert into student(name,addres) values('vibhav','Shat phata')";
            int rowaffected=stateObj.executeUpdate(query);

            //check the row is affected or not
            if(rowaffected!=0){
                System.out.println("Data inserted!...");
            }
            else{
                System.out.println("data insertion failed!...");
            }

            //close connection
            stateObj.close();
            connectionobj.close();
        }
        catch (ClassNotFoundException e){
            System.out.println("Driver class Not found,check JDBC driver jar is installed");
        }
        catch (SQLException e){
            System.out.println("unable to connect with database");
            throw new RuntimeException(e);
        }
    }
}
