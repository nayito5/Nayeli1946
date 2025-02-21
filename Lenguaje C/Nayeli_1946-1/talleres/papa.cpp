#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../Librerias/ahorcado.h"
using namespace std;

string palabraAleatoria(string palabras[]){
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones(){
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cin >> op;
    return op;
}

void mostrarEstado(string palabra, string adivinada, int intentos) {
    cout << "\nAdivine la palabra: " << adivinada << endl;
    cout << "Intentos restantes: " << 7 - intentos << endl;
}

bool jugarAhorcado(string palabra) {
    string adivinada(palabra.length(), '_');
    int intentos = 0;
    char letra;
    bool acerto;
    
    while (intentos < 7 && adivinada != palabra) {
        mostrarEstado(palabra, adivinada, intentos);
        cout << "Ingrese una letra: ";
        cin >> letra;
        
        acerto = false;
        for (size_t i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                adivinada[i] = letra;
                acerto = true;
            }
        }
        
        if (!acerto) {
            intentos++;
            cout << "Incorrecto! Parte del cuerpo colgada." << endl;
        }
    }
    
    if (adivinada == palabra) {
        cout << "\n¡Felicidades! Usted pudo adivinar mi palabra." << endl;
        return true;
    } else {
        cout << "\nLo siento, ha sido colgado. La palabra era: " << palabra << endl;
        return false;
    }
}

int main(){
    string palabras[5], palabraSeleccionada;
    int op;
    char jugarDeNuevo;
    
    do {
        cout << "\nJuego del Ahorcado" << endl;
        cout << "-------------------" << endl;
        cout << "Elige una categoria: " << endl;
        op = opciones();
        (op==1) ? deportes(palabras) : (op==2) ? animales(palabras): frutas(palabras);
        
        palabraSeleccionada = palabraAleatoria(palabras);
        jugarAhorcado(palabraSeleccionada);
        
        cout << "\n¿Desea jugar otra vez? (s/n): ";
        cin >> jugarDeNuevo;
        
    } while (jugarDeNuevo == 's' || jugarDeNuevo == 'S');
    
    return 0;
}
