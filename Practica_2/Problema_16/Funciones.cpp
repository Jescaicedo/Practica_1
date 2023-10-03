#include "Funciones.h"

int** creararre(int a)
{
    int **p=new int *[a];
    for (int i=0; i<a;i++){
        p[i]=new int[a];
    }
    return p;
}

int encontc(int **p,int n)
{
    for(int i=1; i<n;i++){
        *(*(p)+i)=1;
    }
    for(int i=1; i<n;i++){
        *(*(p+i))=1;
    }
    for (int i=1;i<n;i++){
        for (int j=1;j<n;j++){
            *(*(p+i)+j)=*(*(p+(i-1))+j)+*(*(p+i)+(j-1));
        }

    }
    return *(*(p+(n-1))+(n-1));
}
