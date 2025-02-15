#include <iostream>
#include <string.h>
using namespace std;
int comparaCadenas (char cad1[], char cad2[])
{
    return strcmp(cad1, cad2);
}
int copiaCadenas (char cad1[], char cad2[])
{
    strcmp(cad1, cad2);

}
void anacadena (char cad1[], char cad2[]){
    strcpy(cad1, cad2);
}
bool alfabetoNumerico (char cad1[]){
    bool alfabetoNumerico = true;
    for(int i=0;i<strlen (cad1); i++){
        if(isalnum(cad1[i])==false ){ // isalnum para ver numeros 
             alfabetoNumerico = false;
             break;
           
        }
    }
    return alfabetoNumerico;
}
bool alfabeto (char cad1[]){
    bool alfabeto = true;
    for(int i=0;i<strlen (cad1); i++){
        if(isalpha(cad1[i])==false && isblank (cad1[i])==false ){ // isalpha para ver letras 
             alfabeto = false;
             break;
           
        }
    }
    return alfabeto;
}
bool numerico (char cad1[]){
    bool numerico = true;
    for(int i=0;i<strlen (cad1); i++){
        if(isdigit(cad1[i])==false ){ // isdigit para ya no repetir la misma funcion 
            numerico = false;
             break;
           
        }
    }
    return numerico;
}
bool espacio (char cad1[]){
    bool espacio = true;
    for(int i=0;i<strlen (cad1); i++){
        if(isspace(cad1[i])==false ){ // isalpha para ver letras 
             espacio = false;
             break;
           
        }
    }
    return espacio;
}
bool esmayuscula (char cad1[]){
    bool esmayuscula = true;
    for(int i=0;i<strlen (cad1); i++){
        if(isupper(cad1[i])==false ){ // isalpha para ver letras 
             esmayuscula = false;
             break;
           
        }
    }
    return esmayuscula;
}bool esminuscula (char cad1[]){
    bool esminuscula = true;
    for(int i=0;i<strlen (cad1); i++){
        if(islower(cad1[i])==false ){ // isalpha para ver letras 
             esminuscula = false;
             break;
           
        }
    }
    return esmayuscula;
}





main() {
    char cad1[50],cad2[50];
    int comparacion;
    cout<<"Ingrese la primer cadena: ";
    cin.getline(cad1, 50);
    cout<<"Ingrese la segunda cadena: ";
    cin.getline(cad2, 50);
    comparacion = comparaCadenas(cad1, cad2);
    cout<<"comparacion :"<<comparacion <<endl;
    (comparacion==0) ? cout << "Las cadenas son iguales" : cout << "Las cadenas son diferentes";
   // copiaCadenas(cad1, cad2);
    //cout<<"\nLas cadenas copiadas son: C1 ="<<cad1;
    //anacadena(cad1, cad2);
    //cout<<"\nLa cadena anadida es:c1 = "<<cad1;
    (alfabetoNumerico(cad1))?cout<<"\n la cadena" <<cad1 <<"es alfabetoNumerico" : cout<< " \n la cadena" <<cad1<<" no es   alfabetoNumerico";
    (alfabeto(cad1))?cout<<"\n la cadena" <<cad1 <<"es alfabeto" : cout<< " \n la cadena" <<cad1<<" no es   alfabeto";
    (numerico(cad1))?cout<<"\n la cadena" <<cad1 <<"es numerico" : cout<< " \n la cadena" <<cad1<<" no es   numerico";
    (espacio(cad1))?cout<<"\n la cadena" <<cad1 <<"tiene espacio" : cout<< " \n la cadena" <<cad1<<" no es   espacio";
    (esmayuscula(cad1))?cout<<"\n la cadena" <<cad1 <<"es mayuscula" : cout<< " \n la cadena" <<cad1<<" no es   mayuscula";
    (esminuscula(cad1))?cout<<"\n la cadena" <<cad1 <<"es minuscula" : cout<< " \n la cadena" <<cad1<<" no es   minuscula";
    

    }

