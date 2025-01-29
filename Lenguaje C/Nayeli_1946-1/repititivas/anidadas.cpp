#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    bool entrar= true;
    int op,cantinum, contador,numverifi, cont2, sum;
    while(entrar){
        cout<<"menu de opciones"<<endl;
        cout<<"1.num abudantes"<<endl;
        cout<<"2.num deficiente"<<endl;
        cout<<"3.num amigos"<<endl;
        cout<<"4.salir" <<endl;
        cout<<"ingrese una opcion"<<endl;
        cin>>op;
        
        if(op>0 && op<4){
            cout<<"ingresa la cantidad de num";
            cin>>cantinum;
            contador=0;
             numverifi=2;
            
        }

        switch (op)
        {
        case 1:
            while(contador < cantinum){
                cont2=1;
                sum=0;
                while(cont2<numverifi){
                    if(cont2==0<numverifi)
                    sum= sum+cont2;
                }
                cont2++;

            }
            if(sum>numverifi){
                cout<<"abudante"<<numverifi<<endl;
                  cont2++;
            }
            numverifi++;

            break;
         case 2:
            cout<<"deficientes"<<endl;
            break;
        case 3:
             cout<<"amigo"<<endl;
            break; 
        case 4:
            entrar=false;
            break;
        default:
            cout<<"opcion no valida";
        

        }
        cout<<"presiona una tecla para continuar>>>";
        cin.ignore();
        getch ();
        system("cls");
   
    }
}

