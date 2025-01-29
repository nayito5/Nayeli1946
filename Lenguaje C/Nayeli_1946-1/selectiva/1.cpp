#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese valor 1: ";
    cin >> a;
    
    cout << "Ingrese valor 2: ";
    cin >> b;
    
    cout << "Ingrese valor 3: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Son iguales" << endl;
    } else {
        int mayor = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        cout << "El mayor es: " << mayor << endl;
    }

    return 0;
}