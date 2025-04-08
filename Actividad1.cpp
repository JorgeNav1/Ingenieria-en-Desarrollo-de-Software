#include <iostream>

int main()
{
    std::cout << "Ingrese su edad: "; /* Este objeto/operador (standard output stream) nos permite mostrar texto. Se añade el operador << 
    seguido del texto que se quiere asignar a la salida*/

    int Edad; 
    std::cin >> Edad; /*Aquí mediante el objeto de flujo de entrada de datos, asignamos el valor de entrada a la variable Edad*/


    /*A partir de aquí iniciamos el ciclo donde se valida el valor ingresado en la variable Edad donde dependiendo si es mayor o no, mostrará uno
    de los 2 mensajes y terminará*/
    if (Edad >= 18) {
        std::cout << "Felicidades, ya eres un adulto.\n";
    } else {
        std::cout << "No eres un adulto aún.\n";
    }

    return 0; // Buena práctica incluir return 0 al final de main para indicar que el programa terminó exitosamente
}