#include <iostream>
using namespace std;

main() {
    int num;
    cout << "Ingresar un numero: " <<endl;
    cin >> num;
    if (num > 0) {
        cout << "El numero es positivo (true): " << endl;
    } else if (num < 0) {
        cout << "El numero es negativo (true): " << endl;
    } else {
        cout << "El numero es falso." << endl;
    }
 
}