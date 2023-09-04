#include <iostream>

using namespace std;

int main()
{
    int N=0,H=0, M=0;
    cout<<"Ingrese segundos: ";
    cin>>N;
    while(N>=59){
        if(N>=3600){
            N-=3600;
            H+=1;
        }
        if(N>60){
            N-=60;
            M+=1;
        }
    }
    cout<<H<<":"<<M<<":"<<N<<endl;
    return 0;
}
