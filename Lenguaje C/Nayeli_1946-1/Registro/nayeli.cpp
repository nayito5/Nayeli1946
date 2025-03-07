#include <iostream>
#include  <string>
using namespace std;

struct conductor{
    string conducthor;
    int kilometros[7];
    int total_kms = 0;
};

int main(){
    int num_conductor;
    cout <<  "la cantidad de conductores:";
    cin >> num_conductor;
    conductor conductores[num_conductor];
  
    for (int i = 0; i < num_conductor; i++) {
        cout << "\nIngrese el nombre del conductor " << i + 1 << ": ";
        getline(cin, conductores[i].conducthor);

        cout << "Ingrese los kilómetros recorridos en los 7 días de la semana:\n";
        for (int j = 0; j < 7; j++) {
            cout << "Día " << j + 1 << ": ";
            cin >> conductores[i].kilometros[j];
            conductores[i].total_kms += conductores[i].kilometros[j];
        }
        cin.ignore(); 
    }
    cout << "\nDatos de los conductores:\n";
    for (int i = 0; i < num_conductor; i++) {
        cout << "Nombre: " << conductores[i].conducthor << endl;
        cout << "Kilómetros recorridos por día: ";
        for (int j = 0; j < 7; j++) {
            cout << conductores[i].kilometros[j] << " ";
        }
        cout << "\nTotal kilómetros recorridos: " << conductores[i].total_kms << " km\n";
        cout << "-----------------------------------\n";
    }
    
    
    return 0;
}

   


