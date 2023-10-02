#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout<<"Ingrese un numero a: ";
    cin>>a;
    b=a;
    for(int i=1;i<=5;i++){
        cout<<b<<"^"<<i<<"= "<<a<<endl;
        a*=b;
    }
    return 0;
}
