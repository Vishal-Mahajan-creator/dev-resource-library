package org.CompanyA;

import org.springframework.context.ApplicationContext;
import org.springframework.context.ConfigurableApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class Main {
    public  static  void main(String[] args){

        ApplicationContext contextObj=new AnnotationConfigApplicationContext(AppConfig.class);
        DAO daoObj=contextObj.getBean(DAO.class);
        daoObj.getAllEmployees();
    }
}
