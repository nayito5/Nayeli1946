#include <iostream>
using namespace std;
main()
{
    int dia;
    cout<<"ingresar dia de las semanas :";
    cin>>dia ;
    switch (dia)
    {
        case 1:
           cout<< "es lunes"<<endl;
           //break;
        case 2:
           cout<< "es martes"<<endl;
           //break;
        case 3:
           cout<< "es miercoles"<<endl;
           //break;
        case 4:
           cout<< "es jueves"<<endl;
           break;
        case 5:
           cout<< "es viernes"<<endl;
           break;
        case 6:
        case 7:
           cout<< "es fin de semana"<<endl;
           break;
        default :
            cout<<"dia no valido"<<endl;

    }
}