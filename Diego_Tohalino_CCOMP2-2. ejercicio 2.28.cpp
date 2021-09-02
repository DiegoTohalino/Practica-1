#include <iostream>

using namespace std;
int main(){
    int a,b,c,d,w,x,y,z;
    int n(4);

    cout<<"Escribre un numero de 4 cifras";
    cin>>n;
    
    a=n/1000;
    w=n%1000;
    b=w/100;
    x=w%100;
    c=x/10;
    d=x%10;
    
    cout<<d<<"  "<<c<<"  "<<b<<"  "<<a<<"  ";
    
    return 0;
}