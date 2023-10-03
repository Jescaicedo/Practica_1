#include <iostream>
#include "Funciones.h"

using namespace std;

int main()
{
    int **pointer=llenararre();
    cout<<"La matriz inicial es:"<<endl;
    imprimir(pointer);
    matriznove(pointer);
    cout<<"La matriz rotada 90 grados es:"<<endl;
    imprimir(pointer);
    cout<<"La matriz rotada 180 grados es:"<<endl;
    matrizochen(pointer);
    imprimir(pointer);
    cout<<"La matriz rotada 270 grados es:"<<endl;
    matrizseten(pointer);
    imprimir(pointer);



    for(int i=0; i<5;i++){
        delete[] pointer[i];
    }
    delete[] pointer;
}
