#include<iostream>
using namespace std;

struct personas {
    int id;
    string nombre;
    int edad;
    bool casado= false;

};
 void ingresarDatosRegistros(personas per[],int n){
    char resp;
    int i;
    for(i=0;i<n;i++){
        per[i].id=i+1;
        cout<<"Ingrese el nombre de la persona :";
        cin>>per[i].nombre;
        cout<<"Ingrese la edad de la persona :";
        cin>>per[i].edad;
        cout<<"es casado?:" <<"S/N:";
        cin.get(resp);
        cin.ignore();
        if(resp=='S' || resp=='s'){
            per[i].casado=true;
        }
        else{
            per[i].casado=false;
        }
        
    }
 }
 void mostrarDatosRegistros(personas per[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<per[i].id<<"\t";
        cout<<per[i].nombre<<"\t";
        cout<<per[i].edad<<"\t";    
        if(per[i].casado==true){
            cout<<"Si"<<endl;
        }

 }

 }
 main(){
     int np;
     cout<<"Ingrese el numero de personas: ";
     cin>>np;
     personas per[np];
     ingresarDatosRegistros(per,np);
     mostrarDatosRegistros(per,np);
 }