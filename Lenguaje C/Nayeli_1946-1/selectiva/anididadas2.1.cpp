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

    if(a > b && a > c){
        cout<<" el mayor es:"<<a<<endl;   
    }else if(b > a && b>c){
        cout<<"el mayor es:"<<b<<endl;
    }else if(c >a && c>b){
         cout<<"el mayor es:"<<c<<endl;
    }else{
        cout<<"todos son igaules"<<endl;
    }
}
 