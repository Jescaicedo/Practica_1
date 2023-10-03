#include "Funciones.h"

void imprimir(int **pointer)
{
    for(int i=0; i<5;i++){
        for(int j=0; j<5;j++){
            if(*(*(pointer+i)+j)/10==0){
                cout<<*(*(pointer+i)+j)<<"  ";
            }
            else{
                cout<<*(*(pointer+i)+j)<<" ";
            }
        }
    cout<<endl;
    }
}

int** llenararre()
{
    int **p=new int *[5];
    for (int i=0; i<5;i++) p[i]=new int[5];
    int num=0;
    for(int i=0; i<5;i++){
        for(int j=0; j<5;j++){
        num+=1;
        *(*(p+i)+j)=num;
        }
    }
    return p;
}

void matriznove(int **p)
{
    int num=0;
    for (int i=4; i>=0;i--){
        for(int j=0; j<5;j++){
            num+=1;
            *(*(p+j)+i)=num;
        }
    }
}

void matrizochen(int **p)
{
    int num=0;
    for (int i=4; i>=0;i--){
        for(int j=4; j>=0;j--){
            num+=1;
            *(*(p+i)+j)=num;
        }
    }
}

void matrizseten(int **p)
{
    int num=0;
    for (int i=0; i<5;i++){
        for(int j=4; j>=0;j--){
            num+=1;
            *(*(p+j)+i)=num;
        }
    }
}
