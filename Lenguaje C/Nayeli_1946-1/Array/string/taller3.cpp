//remplazar juan
#include <iostream>
using namespace std;

int main() {
    string cadena, objetivo, porcion;
    cout << "Ingrese una frase: ";
    getline(cin, cadena);

    cout << "Ingrese la palabra a buscar en la frase: ";
    getline(cin, porcion);

    cout << "Ingrese la palabra de reemplazo: ";
    cin >> objetivo;

    int size = porcion.size();  
    int pos = cadena.find(porcion); 

    if (pos != string::npos) {  
        cadena.replace(pos, size, objetivo);  
        cout << "Frase modificada: " << cadena << endl;
    } else {
        cout << "La palabra no se encontró en la frase." << endl;
    }


    int comparacion = cadena.compare(objetivo);
    cout << "Comparacion: " << comparacion << endl;

  
    int encontrado = cadena.find("le");
    cout << "Encontrado: " << encontrado << endl;

    
    (cadena.find("o") == string::npos) ? cout << "No encontrado" : cout << "Encontrado";

    return 0;
}


