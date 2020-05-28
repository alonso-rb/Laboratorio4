#include <iostream>
using namespace std;

int main (void){
    int num, modl;
    cout<<"Ingrese un número"<<endl;
    cin>>num;
    modl= num%2;
    if (modl == 0){
        cout<<"El número es par"<<endl;
    }
    else{
        cout<<"El número es impar"<<endl;
    }
    return 0;
}