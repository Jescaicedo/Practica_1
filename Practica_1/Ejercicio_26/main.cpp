#include <iostream>

using namespace std;

int main()
{
    int ladou, ladod, ladot;
    cout<<"Ingrese la longitud del primer lado: ";
    cin>>ladou;
    cout<<"Ingrese la longitud del segundo lado: ";
    cin>>ladod;
    cout<<"Ingrese la longitud del tercer lado: ";
    cin>>ladot;
    if(ladou+ladod>ladot && ladod+ladot>ladou && ladou+ladot>ladod){
        if(ladou==ladod && ladod==ladot){
            cout<<"Se puede formar un triangulo equilatero"<<endl;
        }
        else if(ladou!=ladod && ladod!=ladot && ladot!=ladou){
            cout<<"Se puede formar un triangulo escaleno"<<endl;
        }
        else{
            cout<<"Se puede formar un triangulo isosceles"<<endl;
        }
    }
    else{
        cout<<"No se puede formar un triangulo"<<endl;
    }
    return 0;
}
