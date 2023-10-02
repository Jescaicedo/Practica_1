#include <iostream>

using namespace std;

int main()
{
    int N, aux, Nr=0 ;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    aux=N;
    while(aux!=0){
        Nr=Nr*10+(aux%10);
        aux/=10;
    }
    if(Nr==N){
        cout<<N<<" es un numero palindromo"<<endl;
    }
    else{
        cout<<N<<" No es un numero palindromo"<<endl;
    }

    return 0;
}
