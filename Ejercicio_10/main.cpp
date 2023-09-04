#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout<<"Ingrese un numero a: ";
    cin>>a;
    cout<<"Los multiplos de "<<a<<" menores que 100 son: " <<endl;
    for(int i=1;i<=100;i++){
        if(a*i>1 && a*i<100){
            cout<<a*i<<endl;
        }

    }
    return 0;
}
