package org.CompanyA;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.jdbc.datasource.DriverManagerDataSource;

@Configuration
public class AppConfig {

    @Bean
    public DriverManagerDataSource getDataSourceObj() {
        DriverManagerDataSource dsobj = new DriverManagerDataSource();
        dsobj.setDriverClassName("com.mysql.cj.jdbc.Driver");
        dsobj.setUrl("jdbc:mysql://localhost:3306/dql");  // ✅ fixed
        dsobj.setUsername("root");
        dsobj.setPassword("Root@123");
        return dsobj;
    }

    @Bean
    public DAO getDAOClassObj() {
        return new DAO(getDataSourceObj());
    }
}
