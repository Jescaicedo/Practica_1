#include <iostream>

using namespace std;

int main()
{
    int N;
    float phi=1, deno=3;
    cout<<"Ingrese el numero de terminos N: ";
    cin>>N;
    for(int i=0; i<N-1; i++){
        if(i%2==0){
            phi-=1/deno;
            deno+=2;
        }
        else{
            phi+=1/deno;
            deno+=2;
        }
    }
    phi*=4;
    cout<<"El valor aproximado de phi con "<<N<<" Terminos es "<<phi<<endl;
    return 0;
}
