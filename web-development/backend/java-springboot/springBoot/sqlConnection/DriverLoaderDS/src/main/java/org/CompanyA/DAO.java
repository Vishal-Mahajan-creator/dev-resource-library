package org.CompanyA;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import org.springframework.jdbc.datasource.DriverManagerDataSource;

public class DAO {
    DriverManagerDataSource ds;

    public DAO(DriverManagerDataSource givenDriverManagerObj) {
        this.ds = givenDriverManagerObj;
    }

    public void getAllEmployees() {
        try {
            Connection connectionObj = ds.getConnection();
            Statement stmtObj = connectionObj.createStatement();

            String sqlQuery = "SELECT * FROM employee";
            ResultSet rs = stmtObj.executeQuery(sqlQuery);

            while (rs.next()) {
                System.out.println("EmpId: " + rs.getInt(1));
                System.out.println("EmpName: " + rs.getString(2));
                System.out.println("EmpSalary: " + rs.getFloat(3));
            }

            rs.close();
            stmtObj.close();
            connectionObj.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
