#include<iostream>
using namespace std;
//cuerpo de las funciones

int mayor(int a, int b )
{
    if (a>b)
    return a;
    else
    return b;
}
float promedio (int a, int b)
{
    return(a+b)/2.0;
}
void saludo(int hora)
{
    if(hora<12)
      cout<< "buenos dias"<< endl;
    else if (hora< 19)
       cout<< "buenos dias"<< endl; 
    else
    cout<< "buenos noches"<< endl;
      

}