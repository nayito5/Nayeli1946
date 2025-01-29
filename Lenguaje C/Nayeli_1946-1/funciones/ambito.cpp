#include <iostream>
using namespace std;

float x, gravedad=9.8;
void funcion1(int a){
    float gravedad=10.8;
   cout<<"gravedad en fuencion 1:"<< x <<endl;
   cout<<"gravedad global:"<<::gravedad<<endl;
   cout<< "a" << a << endl;
}
void funcion2( int x){
    float garvedad= 11.8;
    cout<<"gravedad en feuncion2:"<< x <<endl;
    cout<<"gravedad global:"<<::gravedad<<endl;
    cout<< "x" << x << endl;

}
main()
{
    int num1=10;
    float num2= 20.5;
    {
        char letra ='A';
        cout<< "letra:"<< letra <<endl;

    }
    cout<<"gravedad:"<< x <<endl;
    funcion1(num1);
    funcion2(num2);



}