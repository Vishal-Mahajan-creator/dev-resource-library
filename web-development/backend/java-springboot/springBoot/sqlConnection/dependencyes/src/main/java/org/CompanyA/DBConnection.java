package org.CompanyA;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBConnection {

    String url;
    String name;
    String pass;

    public  DBConnection(String givenURL,String givenName,String givenPass){
        this.url=givenURL;
        this.name=givenName;
        this.pass=givenPass;
    }

    public Connection getConnection()throws ClassNotFoundException, SQLException{

        Class.forName("com.mysql.cj.jdbc.Driver");
        return DriverManager.getConnection(this.url,this.name,this.pass);

    }

}
