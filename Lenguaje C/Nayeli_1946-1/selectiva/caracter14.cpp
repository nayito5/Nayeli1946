#include <iostream>
using namespace std;
main()
{
    int n1 ,n2 ;
    char operador;
    cout<<"ingresa dato 1:";
    cin>>n1;
    cout<<"ingresa dato 2:";
    cin>>n2;
    cout<< "que operacion va a realizar: <<+>> ,<<->>,<<*>>,<</>>";
    cin>>operador;
    switch (operador){
        case '+':
           cout<<"la suma de" <<n1<<"con "<<n2<< "="<<(n1+n2) <<endl;
           break;
        case '-':
           cout<<"la resta de" <<n1<<"con "<<n2<< "="<<(n1-n2) <<endl;
           break;
        case '*':
           cout<<"la multiplicacion de" <<n1<<"con "<<n2<< "="<<(n1*n2) <<endl;
           break;
         case '/':
          (n2==0)?cout<<"no existe division por cero": cout<<"la division de" <<n1<<"con "<<n2<< "="<<(n1/n2) <<endl;
           break; 
         default:
            cout<<"operador"<<operador<<"no valido"<<endl;
 
    }
}