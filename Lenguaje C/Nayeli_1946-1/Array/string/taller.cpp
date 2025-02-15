#include<iostream>
using namespace std;
int main (){
    string cadena= "informatica ";
    cadena.clear();
    cout<<cadena;
    cadena= "informatica ";

    cout << "la cadena " << cadena << "la tiena "<< cadena. length() << "carateristica "<<endl;

    cout << "primer carecter: " <<cadena.length() <<endl;
    cout << "ultimo carecter: " <<cadena.length() <<endl;

    cadena.append(cadena);
    cout << cadena<<endl;

    char car='0';
    cadena.append(cadena);
    cout << cadena<<endl;

    cadena="informatica ";

    if(cadena.find("i")!=-1)
    cout << "posicion del primer caracter: "<< cadena.find("i")<<endl;
    cout << "posicion del segundo caracter: "<< cadena.find("i",1)<<endl;

    string subcad;
    subcad=cadena.substr(2,3);
    cout << "subcadena: "<<endl;
    subcad=cadena.substr(5);
    cout << subcad<<endl;


    cout << cadena <<endl;
    cadena.replace(6,5,"accion ");
    cout << cadena<<endl;

    return 0;

}