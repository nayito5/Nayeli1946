#include <iostream>
using namespace std;
struct persona{
    string nombre;
    int edad;
    float estatura;
};
void leerRegistro(persona &per1){   
    cout<<"nombre: " <<per1.nombre<<endl;
    cout<<"edad: " <<per1.edad<<endl;
    cout<<"estatura: " <<per1.estatura<<endl;

}
void ingresarRegistro(persona &per1){
    cout<<"ingresa el nombre: ";
    getline(cin,per1.nombre);
    cout<<"ingresa la edad: ";
    cin>>per1.edad;
    cout<<"ingresa la estatura: ";
    cin>>per1.estatura;


}
void mostrarRegistro(persona &per1){
    cout<<"Datos de la persona"<<endl;
    cout<<"Nombre: "<<per1.nombre<<endl;
    cout<<"Edad: "<<per1.edad<<endl;
    cout<<"Estatura: "<<per1.estatura<<endl;
}
main(){
    persona p1{"", 0, 0.0};
    ingresarRegistro(p1); 
    mostrarRegistro(p1);

}
