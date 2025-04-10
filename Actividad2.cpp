#include <iostream> /*Se incluye libreria*/
int main()
{
    std::cout << "Ingrese el primer numero:"; /*Mensaje standar de salida para indicar que muestre en 
    pantalla el mensaje*/

    double valor1; /*Se define variable de tipo de dato double*/
    std::cin >> valor1;/*Se captura el primer numero*/

    std::cout << "Ingrese el segundo numero:";/*Mensaje standar de salida para indicar que muestre en 
    pantalla el mensaje*/

    double valor2; /*Se define segunda variable de tipo de dato double*/
    std::cin >> valor2;/*Se captura el primer numero mediante el operador stad::cin*/

    /*A continuación se realiza la operación de los valores almacenados en valor1 y valor2,
    y el resultado se guarda en una nueva variable entera llamada según la operación realizada.*/

    double suma = valor1 + valor2;
    double resta = valor1 - valor2;
    double multiplicacion = valor1 * valor2;
    double division = static_cast<double>(valor1) / valor2; 

    std::cout << "La suma de ambos valores es:" << std::endl;
    std::cout << suma << std::endl;

    std::cout << "La resta de ambos valores es:" << std::endl;
    std::cout << resta << std::endl;

    std::cout << "La multiplicacion de ambos valores es:" << std::endl;
    std::cout << multiplicacion << std::endl;

    std::cout << "La division de ambos valores es:" << std::endl;
    std::cout << division << std::endl;

    /*Muestra los mensajes de salida utilizando las variables que generó para cada operaciòn
    std::endl es un manipulador de flujo que inserta un carácter de nueva línea en el flujo de salida,
    lo que hace que el siguiente texto se muestre en la siguiente línea*/
    
    return 0;
}