#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cout<< "ingrese un valor 1:";
    cin>> a;
    cout<< "ingrese un valor 2:";
    cin>> b;
    cout<< "ingrese un valor 3:";
    cin>> c;

    if(a>b){
        if(a>c){
            cout<<"el mayor es :"<<a <<endl;
         } else{
            cout<<"el mayor es"<<c <<endl;
         }
    }
    else{
        if(b>c){
           cout<<"el mayor es :"<<b<<endl; 
        }
        else {
            if(c>a){
                cout<<"el mayor es :"<<c<<endl;
        }
        else{ 
          cout<<"todos son iguales"<<endl;
        }
            }
          
    }
    

}