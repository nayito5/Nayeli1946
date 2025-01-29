#include <iostream>
using namespace std;
main()
{
    int n, contador, s, dato;
    cout<<"ingrese cuantas datos vas a entregar:";
    cin>>n;
    contador =0 ;
    s=0;
    while (contador<n){
    cout<<"ingrese un valor:";
    cin>>dato;
    contador ++;
    s = s +dato;
    }
    cout<<"la suma de"<< n<<"valores"<< "n"<< s <<endl;
}