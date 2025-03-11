Algoritmo suma_numeros
	definir n, dato, s,contador Como Entero
	escribir "ingresar cuantos datos quieres ingresar"
	leer n
	
	contador = 1
	s = 0
	mientras contador < n Hacer
		escribir "ingresaste un numero"
		leer dato
		contador = contador + 1
		s = s + dato 
	FinMientras
	escribir "la acumalacion de " ,n," =", s
FinAlgoritmo
