package com.mycompany.javaimc;

public class Persona {
    private double peso;
    private double estatura;

    public void setPeso(double peso) { this.peso = peso; }
    public void setEstatura(double estatura) { this.estatura = estatura; }

   public double getImc() {
    if (this.peso > 0 && this.estatura > 0) {
        return this.peso / (this.estatura * this.estatura);
    } else {
        return 0;
    }
}
    
    public String getEstadodesalud() {
    double valorImc = this.getImc();

    if (valorImc < 18.5) {
        return "Bajo Peso";
    } else if (valorImc < 25) {
        return "Peso Normal";
    } else if (valorImc < 30) {
        return "Sobre Peso";
    } else if (valorImc < 35) {
        return "Obesidad Grado I";
    } else if (valorImc < 40) {
        return "Obesidad Grado II";
    } else {
        return "Obesidad Grado III (Mórbida)";
    }
    }
}