package com.example.demo.service;

import com.example.demo.model.Product;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ProductService
{
    public List<Product> getProducts()
    {
    return List.of(
        new Product("Laptop",80000),
        new Product("SmartPhone",4000),
        new Product("Watch",7000)
    );
    }
}
