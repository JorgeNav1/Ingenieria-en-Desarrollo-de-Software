Algoritmo NumeroPrimo
	Escribir "Ingresa un numero entero por favor"
	Leer numeroentero
	
	Contador<-0
	
	Para divisor<-1 Hasta numeroentero Hacer
		si numeroentero % divisor = 0 Entonces
			Contador<-Contador+1
		FinSi
	FinPara
	
	si Contador = 2 Entonces
		Escribir numeroentero, " Es un numero primo";
	SiNo
		Escribir numeroentero, " No es un numero primo";
	FinSi
FinAlgoritmo
