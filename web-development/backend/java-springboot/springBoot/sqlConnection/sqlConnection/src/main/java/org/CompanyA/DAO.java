package org.CompanyA;

import java.sql.*;


public class DAO {

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
            String query="insert into student(name,addres) values('Ranu mandal','Nark')";
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

    public void updateStudent(){

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
            String query="update student set addres='Somatne Phata' where roll=11 ";
            int rowaffected=stateObj.executeUpdate(query);

            //check the row is affected or not
            if(rowaffected!=0){
                System.out.println("Data updated!...");
            }
            else{
                System.out.println("data updation failed!...");
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

    public void deleteStudent(){

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
            String query="delete from student where roll=16";
            int rowaffected=stateObj.executeUpdate(query);

            //check the row is affected or not
            if(rowaffected!=0){
                System.out.println("Data deleted!...");
            }
            else{
                System.out.println("data deletion failed!...");
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
