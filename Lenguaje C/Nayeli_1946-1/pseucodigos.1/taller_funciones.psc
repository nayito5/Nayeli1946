Funcion fac <- factorial ( num )
	Definir  fac,i  Como Entero
	fac=1
	para i= 1 hasta num Hacer
		fac = fac * i
		
	FinPara
	
	
Fin Funcion

Funcion c <- fibonacci ( num )
	Definir a, b,c ,i como entero
	a= 0
	b = 1
	para i = 1  hasta num Hacer
		c = a + b
		a = b
		b = c
	FinPara
	
Fin Funcion

Algoritmo taller_funciones
	Definir numer, i  como entero
	Definir  resultado, suma Como Real
	suma= 0
	resultado=0
	escribir "ingresa cuantos terminos tiene la serie "
	leer numer
	para i= 1 hasta numer Hacer
		resultado =factorial (i)/fibonacci(i)
		suma= suma + resultado
	FinPara
	ESCRIBIR "El resultado es", resultado
	
	
	
FinAlgoritmo
