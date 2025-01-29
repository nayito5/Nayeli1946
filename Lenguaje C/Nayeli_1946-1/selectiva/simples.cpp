#include <iostream>
using namespace std;
main()
{
    int num,div,r;

    cout<<"ingresa un numero:";
    cin>>num;
    cout <<"ingresa un numero divisor";
    cin >> div;
    r= num % div;
    if(r==0){
        cout <<"el numero"<< num << "es divible por" << div << endl;
        
    }
    else{
         cout <<"el numero"<< num << "es divible por" << div << endl;
    }
    num = 0;
}