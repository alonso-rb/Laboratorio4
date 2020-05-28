#include <iostream>
using namespace std;

int main(void){
    int dividendo, divisor, modl ;

    cout<<"Ingrese el dividendo"<<endl;
    cin>>dividendo;
    cout<<"Ingrese el divisor"<<endl;
    cin>>divisor;
    modl = dividendo % divisor;
    cout<<modl;
    if(modl==0){
        cout<<"El número "<<dividendo<<" sí es divisible entre :"<<divisor<<endl;
    }
    else
    {
        cout<<"El número "<<dividendo<<" no es divisible entre :"<<divisor<<endl;
    }
     return 0;
}