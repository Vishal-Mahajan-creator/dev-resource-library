package org.CompanyA;

import org.CompanyA.config.AppConfig;
import org.CompanyA.repositary.DAO;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class Main {
    public static void main(String[] args){
        ApplicationContext contexObj=new AnnotationConfigApplicationContext(AppConfig.class);

        DAO daoObj=contexObj.getBean(DAO.class);
        daoObj.getAllEmployees();
    }
}
