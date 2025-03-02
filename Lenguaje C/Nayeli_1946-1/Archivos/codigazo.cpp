#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

void buscarPalabras(ifstream &archivosEntrada, ofstream &archivoSalida, string palabraBuscar, string palabraRemplazar){
    archivosEntrada.open("archivo.txt");
    archivoSalida.open("archivo2.txt");
    string linea;
    if (!archivosEntrada.is_open()|| !archivoSalida.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }

    while(getline(archivosEntrada, linea)){
        string  lineaModificada = linea;
        size_t posicion = lineaModificada.find(palabraBuscar);
        while(posicion != string::npos){
            lineaModificada.replace(posicion, palabraBuscar.length(), palabraRemplazar);
            posicion = lineaModificada.find(palabraBuscar, posicion + palabraRemplazar.length());
        } 
        archivoSalida << lineaModificada << endl;  
       }
       rename("archivo2.txt", "archivo.txt");
       archivosEntrada.close();
       archivoSalida.close();
    }
void manejoArchivos(){
     if (remove ("archivo.txt") ==  -1){
        perror("Error al borrar el archivo");
     }else 
       printf("Archivo borrado con exito");
    if (rename("archivo2.txt", "archivo.txt") == -1){
        perror("Error al renombrar el archivo");
    }else 
       printf("Archivo renombrado con exito");  
}

   
int main(){
    ifstream archivoEntrada;
    ofstream archivoSalida;
    string palabraBuscar, palabraRemplazar, linea;
    cout << "Ingrese la palabra a buscar: ";
    getline(cin, palabraBuscar);
    cout << "Ingrese la palabra a remplazar: ";
    getline(cin, palabraRemplazar); 
    buscarPalabras(archivoEntrada, archivoSalida, palabraBuscar, palabraRemplazar);
    cout << "proceso completado" << endl;
    return 0;
}
  