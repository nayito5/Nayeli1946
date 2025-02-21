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

bool jugarAhorcado(string palabra, int intentos = 0, string adivinada = "") {
    if (adivinada == "") {
        adivinada = string(palabra.length(), '_');
    }
    
    if (intentos >= 7) {
        cout << "\nLo siento, ha sido colgado. La palabra era: " << palabra << endl;
        return false;
    }
    
    if (adivinada == palabra) {
        cout << "\n¡Felicidades! Usted pudo adivinar mi palabra." << endl;
        return true;
    }
    
    mostrarEstado(palabra, adivinada, intentos);
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    
    bool acerto = false;
    int i = 0;
    
    if (i < palabra.length()) {
        if (palabra[i] == letra) {
            adivinada[i] = letra;
            acerto = true;
        }
        i++;
    }
    
    if (!acerto) {
        cout << "Incorrecto! Parte del cuerpo colgada." << endl;
        intentos++;
    }
    
    return jugarAhorcado(palabra, intentos, adivinada);
}

int main(){
    string palabras[5], palabraSeleccionada;
    int op;
    char jugarDeNuevo;
    
    cout << "\nJuego del Ahorcado" << endl;
    cout << "-------------------" << endl;
    cout << "Elige una categoria: " << endl;
    op = opciones();
    (op==1) ? deportes(palabras) : (op==2) ? animales(palabras): frutas(palabras);
    
    palabraSeleccionada = palabraAleatoria(palabras);
    jugarAhorcado(palabraSeleccionada);
    
    cout << "\n¿Desea jugar otra vez? (s/n): ";
    cin >> jugarDeNuevo;
    
    if (jugarDeNuevo == 's' || jugarDeNuevo == 'S') {
        main();
    }
    
    return 0;
}