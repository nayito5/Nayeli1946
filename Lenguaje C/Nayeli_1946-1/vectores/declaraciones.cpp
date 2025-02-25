#include <iostream>
#include <vector>

using namespace std;

void cambiar_elemento(vector<int> &num) {
    num[0] = 100;
}

int main() {
    vector<int> datos;
    vector<float> notas(3, 7.9);  // INICIALIZA CON 3 ELEMENTOS DE 7.9
    vector<int> datos1;  // Declaración de datos1
    
    datos.push_back(10);
    datos.push_back(20);
    datos.push_back(30);
    datos.push_back(40);
    datos.push_back(50);
    datos1 = datos;

    for (std::vector<int>::size_type i = 0; i < datos.size(); i++) {
        cout << datos[i] << " ";
    }
    cout << endl;

    for (auto x : datos) {
        cout << x << " ";
    }
    cout << "\n";

    for (auto y: notas) {
        cout << y << " ";
    }
    cout << "\n";

    datos1 = datos;
    cout << "Datos 1\n";

    for (auto x : datos1) {
        cout << x << " ";
    }
    datos.erase(datos.begin() + 2, datos.begin()+4);
    cout<<"Nuevos elementos de datos: "<<endl;
    for (auto y : datos) {
        cout << y << " ";
    }

    datos.erase(datos.begin() + 1, datos.end()+2);    
    cout << "\nNuevos elementos de datos: " << endl;
    for (auto y : datos) {
        cout << y << " ";
    }
    cout <<"insertando elementos entre lementos"<<endl;
    datos.insert(datos.begin() + 1, 80);
    cout << "\n Nuevos elementos de datos: " << endl;
    for (auto y : datos) {
        cout << y << " ";
    }
    cambiar_elemento(datos);
    cout << "\nNuevos elementos de datos: " << endl;
    for (auto y : datos) {
        cout << y << " ";
    }
    datos.pop_back();
    cout << "\nNuevos elementos de datos: " << endl;
    for (auto y : datos) {
        cout << y << " ";
    }
    cout<< boolalpha;//J
    cout <<datos.empty();
}