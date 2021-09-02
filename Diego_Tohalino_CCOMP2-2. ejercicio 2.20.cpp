#include <iostream>
using namespace std;
int main(){
    
    int radio;
    float pi=3.14159;
    
    cout<<"Ingrese el radio de un circulo"<<endl;
    cin>>radio;
    
    cout<<"El diametro del circulo es: "<<2*radio<<endl;
    cout<<"La longitud del circulo es: "<<2*pi*radio<<endl;
    cout<<"El area del circulo es: "<<pi*radio*radio<<endl;
    
    return 0;
}