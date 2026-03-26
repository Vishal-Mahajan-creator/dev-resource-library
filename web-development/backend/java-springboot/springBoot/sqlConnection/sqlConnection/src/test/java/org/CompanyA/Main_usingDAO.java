package org.CompanyA;

import  org.CompanyA.DAO;
import org.springframework.beans.factory.annotation.Autowired;

public class Main_usingDAO {

    DAO daoObj=new DAO();

    public static  void main(String[] args){
        //for performing insertion operation

        daoObj.addStudent();

        //for performing updation operation
        daoObj.updateStudent();

        //for performing deletion operation
        daoObj.deleteStudent();

        //for performing select i.e retrival operation
        daoObj.getAllStudent();

    }
}
