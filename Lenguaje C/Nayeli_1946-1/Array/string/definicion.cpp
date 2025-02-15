#include <iostream>
using namespace std;
int main(){
    string nombre= "pedro";
    string  apellido=("Perez");
    string inicial (1,'p');
    string cadena = "juan jose arturo";
    string nombre2(cadena,0,8 ) ; // metodo contructor 
    cout << "la longitud de nombre2 es:" <<nombre2.length() <<endl;
    inicial+="edro";
    cout << inicial [0]<<endl;
    cout << inicial << endl;
    inicial= " cad";
    cout << inicial <<endl;
    cout << nombre2 << endl;
    return 0;
}