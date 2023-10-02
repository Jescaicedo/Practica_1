#include <iostream>

using namespace std;

int main()
{
    int hingresada, mingresado, hcingresada, hsuma, msuma;
    cout<<"Ingrese una hora: ";
    cin>>hcingresada;
    mingresado=hcingresada%100;
    hingresada=hcingresada/100;
    while((hingresada<0 || hingresada>23) || (mingresado<0 || mingresado>59)){
        cout<<"Ingrese una hora valida: ";
        cin>>hcingresada;
        mingresado=hcingresada%100;
        hingresada=hcingresada/100;
    }
    cout<<"Ingrese una hora a sumar: ";
    cin>>hcingresada;
    msuma=hcingresada%100;
    hsuma=hcingresada/100;
    while((hsuma<0 || hsuma>99) || (msuma<0 || msuma>59)){
        cout<<"Ingrese una hora valida: ";
        cin>>hcingresada;
        msuma=hcingresada%100;
        hsuma=hcingresada/100;
    }
    while(hsuma>24){
        hsuma-=24;
    }
    hingresada+=hsuma;
    mingresado+=msuma;
    if(mingresado>59){
        mingresado-=60;
        hingresada+=1;
    }
    if(hingresada>23){
        hingresada-=24;
    }
    cout<<"La hora total es "<<hingresada<<":"<<mingresado<<endl;
    return 0;
}
