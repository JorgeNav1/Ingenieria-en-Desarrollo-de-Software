Algoritmo InvertirNumero
	Escribir "Ingrese un numero de 4 digitos";
	Leer Num //1234
	si Num >= 999 y Num <= 9999
	Ope1 = trunc (Num/1000); // 1.234 , 1
	A= Num Mod 1000 //234
	
	Ope2 = trunc (A/100); // 2.34 , 2
	B= A Mod 1000 // 34
	
	Ope3 = trunc (B/10) ; //3.4 , 3
	resto = B mod 10 // 4
	
	Escribir "El numero inverso al ingresado es " , Resto,Ope3,Ope2,Ope1; 
Sino 
	Escribir "Numero ingresado no valido, debe ser de 4 digitos"
	Fin si
	
FinAlgoritmo
