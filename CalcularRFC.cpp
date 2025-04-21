#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip> // Para std::setfill y std::setw

using namespace std;

// Función para encontrar la primera vocal interna de una cadena
char encontrarPrimeraVocalInterna(const string& str) {
    string vocales = "AEIOUaeiou";
    for (size_t i = 1; i < str.length() - 1; ++i) {
        if (vocales.find(str[i]) != string::npos) {
            return str[i];
        }
    }
    return 'X'; // En caso de no encontrar una vocal interna
}

int main() {
    string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;

    cout << "Ingrese el nombre del empleado: ";
    getline(cin >> ws, nombre); // Leer la línea completa incluyendo espacios

    cout << "Ingrese el apellido paterno: ";
    getline(cin >> ws, apellidoPaterno);

    cout << "Ingrese el apellido materno (deje en blanco si no tiene): ";
    getline(cin >> ws, apellidoMaterno);

    cout << "Ingrese la fecha de nacimiento (DD/MM/AAAA): ";
    cin >> fechaNacimiento;

    string rfc = "";

    // Primeros 2 caracteres
    rfc += toupper(apellidoPaterno[0]);
    rfc += toupper(encontrarPrimeraVocalInterna(apellidoPaterno));

    // Tercera posición
    if (apellidoMaterno.empty()) {
        rfc += 'X';
    } else {
        rfc += toupper(apellidoMaterno[0]);
    }

    // Cuarta posición
    rfc += toupper(nombre[0]);

    // Extraer fecha de nacimiento
    stringstream ss(fechaNacimiento);
    string diaStr, mesStr, anioStr;
    getline(ss, diaStr, '/');
    getline(ss, mesStr, '/');
    getline(ss, anioStr, '/');

    // Quinta y sexta posición (últimos dos dígitos del año)
    rfc += anioStr.substr(2, 2);

    // Séptima y octava posición (mes)
    rfc += (mesStr.length() == 1 ? "0" : "") + mesStr;

    // Novena y décima posición (día)
    rfc += (diaStr.length() == 1 ? "0" : "") + diaStr;

    cout << "\nEl RFC generado es: " << rfc << endl;

    return 0;
}