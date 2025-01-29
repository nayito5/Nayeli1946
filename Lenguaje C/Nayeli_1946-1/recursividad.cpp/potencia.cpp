#include <iostream>
using namespace std;

int division (int a, int b){
    if ( b==0){
    cout << "Error: División por cero no permitida." << endl;
        return -1;
    }
    else {
        return (a / b);
    }
   
}


main(){
    int a , b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"La suma de los numeros es: "<<division(a,b)<<endl;
     int result = division(a, b);
    if (result != -1) { // Verificamos si la división fue exitosa
        cout << "El resultado de la division es: " << result << endl;
    }
    return 0;
}