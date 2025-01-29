/*programa que le lee datos y muestra su promedio y el numero de datos que estan por dejarloy encima del promedio*/
#include <iostream>
using namespace std;
main()
{
    int valor,promedio=0,contador=0;
    char op='s';
    while (op=='s'|| op =='s');{
        cout<<"deseas ingresar valores<<S>> <<N>>:";
        //op = getchar();
        if (op == 's' || op == 's'){
            cout<<"ingresa un valor:";
            cin>>valor;
            contador++;
            promedio = promedio +valor;
        }
        cin.ignore();
    }
    cout<<"el promedio de datos ingresador es"<<((float)promedio/contador)<<endl;
}
