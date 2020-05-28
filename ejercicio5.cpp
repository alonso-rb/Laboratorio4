#include <iostream>
using namespace std;

int main(void){
    string palabra, inicio, final;

    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;

    inicio=palabra.front();
    final=palabra.back();

    if(inicio == final){
        cout<<"La palabra inicia y termina con la misma letra"<<endl;
    }
    else{
        cout<<"La palabra no inicia con la misma letra con la que termina"<<endl;
    }
    return 0;
}