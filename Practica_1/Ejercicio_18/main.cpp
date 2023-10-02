#include <iostream>

using namespace std;

int main()
{
    int N;
    bool ban= false;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    if(N<0){
        cout<<"No es un numero cuadrado perfecto"<<endl;
    }
    else{
        for(int i; i<=N; i++){
            if(i*i==N){
                cout<<N<<" Es un numero cuadrado perfecto"<<endl;
                ban=true;
                break;

            }
        }
    }
    if(!ban){
        cout<<N<<" No es un numero cuadrado perfecto"<<endl;
    }
    return 0;
}
