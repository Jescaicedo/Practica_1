#include <iostream>

using namespace std;

int main()
{
    int N;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i; i<N ;i++){
        if(i==0 || i==N-1){
            for(int j=0; j<N;j++){
                cout<<"+";
            }
            cout<<endl;
        }
        else{
            for(int j=0; j<N;j++){
                if(j==0 || j==N-1){
                    cout<<"+";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
