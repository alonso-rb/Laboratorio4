#include <iostream>
#include <string>
using namespace std;

int main (void){
    string palabra; 
    int largo, modl;

    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;
    
    largo=palabra.length();

    if(largo > 10){
        cout<<"La palabra es mayor a 10 caracteres. "<<endl;
    }
    else
    {
        cout<<"La palabra es menor a 10 caracteres. "<<endl;
    }
    modl=largo % 2;
    if(modl == 0){
        cout<<"La longitud de la palabra es par"<<endl;
    }
    else{
        cout<<"La longitud de la palabra es impar"<<endl;
    }
    
    return 0;
}