#include <iostream>

using namespace std;

int main()
{
    int a, b, lim, acum ;
    cout<<"Ingrese un numero a: ";
    cin>>a;
    cout<<"Ingrese un numero b: ";
    cin>>b;
    cout<<"Ingrese un limite para los multiplos: ";
    cin>>lim;
    if(a*1<lim){
        cout<<a*1;
        acum+=a*1;
    }
    for(int i=2; a*i<lim; i++){
        cout<<"+"<<a*i;
        acum+=a*i;
    }
    for(int i=1; b*i<lim; i++){
        if(b*i%a==0){
            cout<<"+"<<b*i;
            acum+=b*i;
        }
    }
    return 0;
}
