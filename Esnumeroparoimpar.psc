Algoritmo EsParoImpar // Aquì se define el nombre del algoritmo
	
	Totalnumerosingresados<-10 // Aqui definimos la variable "Totalnumerosingresados" en 10, es decir, la inicializamos en 10.
	//Con esto definimos que el total de numeros ingresados seran 10 ya que nos servira para contabilizar las veces que ejecutaremos
	// la operacion.
	
	mientras Totalnumerosingresados>0 hacer // Aqui iniciamos un ciclo donde decimos que mientras la va variable definida
		//anteriormente siga siendo mayor a 0 el ciclo se repetira
		Escribir "Ingresa un numero" ; // Aquì le pedimos al usuario que ingrese un numero 
		Leer numeroingresado // Aqui le asignamos el numero ingresado por el usuario a la variable temporal que lee el sistema
		
		Si numeroingresado%2==0 Entonces //Aqui le decimos que si el residuo de la variable temporal del numero ingreso
			//es 0, es decir no tiene, mostrarà "Es numero Par" si no, es decir, si si tiene residuo, mostrara "Es numero Impar"
			escribir "Es numero Par" ;
		sino 
			Escribir "Es numero Impar"; 
		FinSi
		
		Totalnumerosingresados=Totalnumerosingresados-1 // Aqui le decimos que una vez terminado el ciclo anterior le reste 1 al
		//total del valor de la variable definida en un principio que era 10, en este caso da como resultado 9, por lo tanto
		//vuelve a repetir el ciclo y asi sucesivamente hasta llegar a 0 y terminar ese ciclo.
	FinMientras
	Escribir "Se han validado sin son par o impar 10 numeros" ;
	FinAlgoritmo
