#include <iostream>
#include "Funciones.h"

using namespace std;

int main()
{
    int n=0;
    cout << "Ingrese el tamano de la matriz nxn: ";
    cin>>n;
    n+=1;
    int **pointer=creararre(n);
    int caminos=encontc(pointer,n);
    cout<<"Los caminos totales en una matriz "<<n-1<<"x"<<n-1<<" son "<<caminos<<endl;


    for(int i=0; i<n;i++){
        delete[] pointer[i];
    }
    delete[] pointer;
}
