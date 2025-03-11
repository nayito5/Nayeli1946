Algoritmo FactoresDivisibles
    Definir numero, i, cantidadFactores Como Entero
    Escribir "Ingrese un número entero:"
    Leer numero
    
    Si numero <= 1 Entonces
        Escribir "El número debe ser mayor que 1."
    Sino
        cantidadFactores <- 0
        i <- 1
        
        Mientras i < numero Hacer
            Si numero MOD i = 0 Entonces
                Escribir i
                cantidadFactores <- cantidadFactores + 1
            FinSi
            i <- i + 1
        FinMientras
        
        Escribir "La cantidad de factores divisibles es: ", cantidadFactores
    FinSi
FinAlgoritmo