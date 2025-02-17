#include <iostream>
using namespace std;

int sumaDivisores(int num) {
    int suma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma;
}

main() {
    bool entrar = true;
    int op, cantNumero, contador, nverificador, suma;
    
    while (entrar == true) {
        cout << "Menu de opciones" << endl;
        cout << "1. Numeros abundantes" << endl;
        cout << "2. Numeros deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> op;

        if (op > 0 && op < 4) {
            cout << "Ingrese la cantidad de numeros = ";
            cin >> cantNumero;
            contador = 0;
            nverificador = 2;
        }

        switch (op) {

            case 1:
                while (contador < cantNumero) {
                    suma = sumaDivisores(nverificador);
                    if (suma > nverificador) {
                        cout << "Abundante : " << nverificador << endl;
                        contador++;
                    }
                    nverificador++;
                }
                break;

            case 2:
                while (contador < cantNumero) {
                    suma = sumaDivisores(nverificador);
                    if (suma < nverificador) {
                        cout << "Deficiente : " << nverificador << endl;
                        contador++;
                    }
                    nverificador++;
                }
                break;

            case 3:
                while (contador < cantNumero) {
                    int suma1 = sumaDivisores(nverificador);
                    if (suma1 > nverificador) {
                        int suma2 = sumaDivisores(suma1);
                        if (suma2 == nverificador && nverificador != suma1) {
                            cout << "Amigos : " << nverificador << " y " << suma1 << endl;
                            contador++;
                        }
                    }
                    nverificador++;
                }
                break;

            case 4:
                entrar = false;
                break;

            default:
                cout << "El valor no es valido." << endl;
        }

        system("pause");
        system("cls");
    
    }
}