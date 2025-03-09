//punteros
//Un puntero es una variable que almacena la dirección de memoria de otra variable.
#include <iostream>
using namespace std;

void modificarValor(int *ptr) {
    *ptr = 20; // Modifica el valor de la variable apuntada
}

int main() {
    int numero = 10;
    int *puntero = &numero; // Apunta a la dirección de numero

    cout << "Valor de numero: " << numero << endl;
    cout << "Direccion de numero: " << &numero << endl;
    cout << "Valor almacenado en puntero: " << puntero << endl;
    cout << "Valor apuntado por puntero: " << *puntero << endl;

    modificarValor(puntero); // Pasa el puntero a una función

    cout << "Valor de numero despues de modificarValor: " << numero << endl;

    // Uso de punteros con arreglos
    int arr[] = {1, 2, 3, 4, 5};
    int *ptrArr = arr;

    cout << "Elementos del arreglo usando punteros: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptrArr + i) << " ";
    }
    cout << endl;

    return 0;
}