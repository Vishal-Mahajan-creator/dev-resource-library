package org.CompanyA;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class sqlConnection {

    public static void  main(String[] args){

        try {
            //load and register the driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            //establish connection
            String url = "jdbc:mysql://localhost:3306/dql";
            String username = "root";
            String passward = "Root@123";

            //connect to database
            Connection connectionobj=DriverManager.getConnection(url,username,passward);
            System.out.println("Database connected successfully!");

            //close connection
            connectionobj.close();
        }
        //catch the error
        catch (ClassNotFoundException e){
            System.out.println("Driver class Not found,check JDBC driver jar is installed");
        }
        catch (SQLException e){
            System.out.println("unable to connect with database");
            throw new RuntimeException(e);
        }
    }
}
