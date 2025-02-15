#include <iostream>
using namespace std;

main(){
    string cadena1=("information");
    const char *auxiliar;
    string cadena2("informat"); // CADENA2= CADENA1
    string cadena3(10, '*');

    cadena1.push_back('xyz');//PERMITE AÑADIR UN SOLO CARACTER
    cout <<cadena1;

    cout <<cadena1<<endl;
    cadena1.at(0) ='I';//METODO AT ACCEDE A UN INDICE DE LA CADENA CADENA1[0]
    cout <<cadena1<<endl;

    //USANDO EL METODO FRONT Y BACK PARA CAMBIAR LOS CARACTERES INICIO Y FINAL
    cadena1.front()='i';
    cadena1.back()='z';
    cout <<cadena1<<endl;
    auxiliar= cadena1.c_str();
    cout << "auxiliar array char:"<<auxiliar << endl;
    
    //METODO EMPTY
    (cadena1.empty())?cout<<"cadena vacia \n ":cout <<"cadena no vacia \n";
    //TAMAÑO MAXIMO DE CARACTERES QUE PUEDE ALMACENAR LA CADENA
    cout << "tamaño maximo de la cadena: "<<cadena1.max_size()<<endl;
    //TAMAÑO EN BYTES DEL OBJECTIVO STRING QUE OCUPA ACTUALMENTE
    cout << "tamaño en bytes de la cadena: "<<cadena1.capacity()<<endl;
    //USANDO EL METODO COMPARE PARA COMPARAR CADENAS
    cout << "cad1=" <<  cadena1  << "cad2 =" << cadena2 << endl;
    cadena1 = "mola";
    cadena2 = "txyz";
    int comparacion= cadena1.compare (cadena2);
    cout<<"Comparacion: " <<comparacion<<endl;
    int encontrado = cadena1.find ("sol");
    cout << "Encontrado: " << encontrado;
    (cadena1.find ("cos")  == string:: npos)? cout<<"no encontrado ":cout << "encontrado";  // string:: npos es una constante especial, que representa un valor que indica "no encontrado" o "posición inválida". se utiliza para no utilizar la libreria string  
    

    

    


}