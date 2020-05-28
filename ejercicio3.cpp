#include <iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Ingrese un número"<<endl;
    cin>>num;
    if(num < 0)
    {
        cout<<"El número es negativo"<<endl;
    }
    else if(num == 0){
        cout<<"El número es 0"<<endl;
    }
    else{
        cout<<"El número es positivo"<<endl;
    }
    return 0;
}