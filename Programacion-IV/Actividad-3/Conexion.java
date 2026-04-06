/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bancodemexico;

/**
 *
 * @author jorge.navidad
 */
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;


public class Conexion {
    
    // Atributos de configuración
    private final String host = "Se uso un servidor privado"; 
    private final String db = "Se uso una base de datos privada";
    private final String user = "Propiedades privadas";
    private final String pass = "Propiedades privadas";
    

    public Connection conectar() {
        Connection cn = null;
        
       
        String url = "jdbc:sqlserver://" + host + ":Puerto default SQL;" +
                     "databaseName=" + db + ";" +
                     "encrypt=true;" + 
                     "trustServerCertificate=true;";
    
   try {
            // El DriverManager busca el driver de la dependencia Maven y abre el túnel
            cn = DriverManager.getConnection(url, user, pass);
            System.out.println("Conexión establecida correctamente.");
        } catch (SQLException e) {
            System.out.println("Error al conectar al servidor SQL: " + e.getMessage());
        }
        
        return cn;
    }
}

