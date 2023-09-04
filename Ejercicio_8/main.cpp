#include <iostream>

using namespace std;

int main()
{
    double a, acum=1;
    cout<<"Ingrese un numero a: ";
    cin>>a;
    for(int i=2; i<=a;i++){
        acum*=i;
    }
    cout<<a<<"!="<<acum<<endl;

    return 0;
}
