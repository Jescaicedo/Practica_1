#include <iostream>

using namespace std;

int main()
{
    double a, p, b;
    cout<<"Ingrese un numero a: ";
    cin>>a;
    cout<<"Ingrese la potencia: ";
    cin>>p;
    b=a;
    for(int i=0;i<p-1;i++){
        a*=b;
    }
    cout<<b<<"^"<<p<<"= "<<a<<endl;
    return 0;
}
