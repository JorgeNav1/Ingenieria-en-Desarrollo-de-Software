package com.example.tiendasara.Services;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.tiendasara.Models.Product;

public interface ProductRepository extends JpaRepository<Product, Integer> {
    
}
