#include <iostream>
using namespace std;
main(){
    int n1,n2,resultado;
    bool operacion ;
    cout<<"ingrese un numero :";
    cin>>n1;
    cout<<" imgrese un numero:";
    cout<<"letra forma:" <<endl;
    (n1>n2)?cout<<n1<<"es mayor que "<<n2:cout<<n2<<"es mayor que "<<n1;
    cout<<endl;
    cout<<"2da Forma:"<<endl;
    resultado = (n1>n2)?n1/n2:n1%n2;
    cout<<" el resultado es:"<<resultado <<endl;
    operacion = (n1> n2) ? true : false;
    if(operacion)
        cout<< "el resultado guarda la division de"<<n1 << "entre" << n2<<endl;
    else
        cout<< "el resultado guarda el modulo de"<<n1 << "entre" << n2<<endl;
}