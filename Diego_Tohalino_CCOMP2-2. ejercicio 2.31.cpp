#include <iostream>
using namespace std;
int main(){
    
    int x,prom,g=200,c=13,cpg,extra,tar,peaj,total;
    
    cout<<"Ingrese millas conducidas hoy:"<<endl;
    cin>>x;
    cout<<"Ingrese tarifas y peaje conducidas hoy:"<<endl;
    cin>>tar>>peaj;
    
    prom=x/g;
    cpg=prom*c;
    extra= tar+peaj;
    total=extra+cpg;
    
    cout<<"El total a pagar por dia es;"<<total<<endl;
    
    return 0;
}