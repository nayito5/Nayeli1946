
#include <iostream>
using namespace std;


  int factoriali(int n){
    int resultado =1;
    for(int i= n ;1>=1;i--)
    resultado *= i;
    return resultado;

  }  
int factorialr(int n){
    if(n==0)
        return 1;
    else
        return n* factorialr(n-1);

}
main()
{
    int numero;
    cout<<"introduce un numero entero:";
    cin>> numero;
    cout<<"el factorial intetativo"<<numero <<endl;
    cout<<"el factorial recursivo"<<numero <<endl;
}