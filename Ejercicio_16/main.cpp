#include <iostream>

using namespace std;

int main()
{
    float cont=0, acum=0, a;
    cout<<"Ingrese un numero a: ";
    cin>>a;
    cont+=1;
    acum+=a;
    while(a!=0){
        cout<<"Ingrese un numero a: ";
        cin>>a;
        if(a!=0){
            cont+=1;
            acum+=a;
        }
    }
    cout<<"El promedio es "<<acum/cont<<endl;
    return 0;
}
