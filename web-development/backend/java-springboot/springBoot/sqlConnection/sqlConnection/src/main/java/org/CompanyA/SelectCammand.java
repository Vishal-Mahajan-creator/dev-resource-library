package org.CompanyA;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class SelectCammand {
    public void getAllStudent(){
        try {
            // Load and register the driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Establish connection
            String url = "jdbc:mysql://localhost:3306/dql";
            String username = "root";
            String password = "Root@123";

            Connection connectionObj = DriverManager.getConnection(url, username, password);
            System.out.println("Database connected successfully!");

            // Create SQL statement
            Statement stateObj = connectionObj.createStatement();

            // Execute SELECT query
            String query = "SELECT roll, name, addres FROM student";
            ResultSet rs = stateObj.executeQuery(query);

            // Process the result set
            while (rs.next()) {
                int roll = rs.getInt("roll");
                String name = rs.getString("name");
                String address = rs.getString("addres");

                System.out.println("Roll: " + roll + ", Name: " + name + ", Address: " + address);
            }

            // Close resources
            rs.close();
            stateObj.close();
            connectionObj.close();
        } catch (ClassNotFoundException e) {
            System.out.println("Driver class not found, check JDBC driver jar is installed");
        } catch (SQLException e) {
            System.out.println("Unable to connect with database");
            throw new RuntimeException(e);
        }
    }
}
