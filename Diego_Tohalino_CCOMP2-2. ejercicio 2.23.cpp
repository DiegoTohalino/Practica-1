#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    float x;

    cout<<"Digite 5 números: ";
    cin>>a>>b>>c>>d>>e;

    x=(a+b+c+d+e)/5;
    if (a>x){
        cout<<"a es mayor"<<endl;
        }
    else{
        cout<<"a es menor"<<endl;
    }
    if (b>x){
        cout<<"b es mayor"<<endl;
    }
    else{
        cout<<"a es menor"<<endl;
    }
    if (c>x){
        cout<<"b es mayor"<<endl;
    }
    else{
        cout<<"a es menor"<<endl;
    }
    if (d>x){
        cout<<"b es mayor"<<endl;
    }
    else{
        cout<<"a es menor"<<endl;
    }
    if (e>x){
        cout<<"b es mayor"<<endl;
    }
    else{
        cout<<"a es menor"<<endl;
    }
    return 0;
}
