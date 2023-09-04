#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int NA= 0, NI, cont=1 ;
    srand(static_cast<unsigned int>(time(nullptr)));
    NA = std::rand() % 101;
    cout<<"Ingrese un numero para adivinar: ";
    cin>>NI;
    while(NA!=NI){
        if(NA<NI){
            cout<<"El numero buscado es menor"<<endl;
        }
        else{
            cout<<"El numero buscado es mayor"<<endl;
        }
        cout<<"Ingrese un numero para adivinar: ";
        cin>>NI;
        cont+=1;
    }
    cout<<"El numero fue encontrado con "<<cont<<" intentos"<<endl;
    return 0;
}
