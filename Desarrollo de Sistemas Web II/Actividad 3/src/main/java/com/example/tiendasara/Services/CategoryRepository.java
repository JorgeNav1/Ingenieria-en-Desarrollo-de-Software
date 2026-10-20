package com.example.tiendasara.Services;

import org.springframework.data.jpa.repository.JpaRepository;
import com.example.tiendasara.Models.Category;


public interface CategoryRepository extends JpaRepository<Category, Integer>{
    
}
