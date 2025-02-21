
#include <iostream>
#include <iomanip>
using namespace std;

struct estudiante
{
    int id;
    string nombre;
    float notap;
};

main ()
{
    int ne;
    float suma=0,promedio=0;
    bool ordena = true;
    cout<<"Ingrese la cantidad de estudiantes que desea ingresar: ";
    cin>>ne;
    estudiante estudiantes[ne],aux;
    for (int i= 0; i<ne; i++)
    {
        cout<<"Ingrese el id del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].id;
        cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].nombre;
        cout<<"Ingrese la nota del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].notap;
    }
    cout<<"Los datos ingresados son: "<<endl;
    cout<<setw(5)<<"ID"<<setw(5)<<"Nombre"<<setw(20)<<"Nota"<<endl;
    for (int i=0; i<ne; i++)
    {
        cout<<setw(5);
        cout<<estudiantes[i].id<<"setw(5)";
        cout<<estudiantes[i].nombre<<"setw(20)";
        cout<<estudiantes[i].notap<<endl;
        suma+=estudiantes[i].notap;
        }
        cout<<"El promedio de las notas es: "<<suma/ne<<endl;
        cout << "listado de estudiantes de mayor nota a menor nota" << endl;
        for(int i=0;i<ne-1 && ordena;i++){
            ordena = false;
            for(int j=0; j<ne; j++){
                if (estudiantes [j].notap< estudiantes [j+i].notap){
                    aux = estudiantes[j+1];
                    estudiantes[j+1] = estudiantes[j];
                    estudiantes[j] = aux;
                    ordena = true;
                }

            }
        }
        for(int i=0; i<ne; i++){
            cout<<setw(5);
            cout<<estudiantes[i].id<<"setw(5)";
            cout<<estudiantes[i].nombre<<"setw(20)";
            cout<<estudiantes[i].notap<<endl;
        }
}