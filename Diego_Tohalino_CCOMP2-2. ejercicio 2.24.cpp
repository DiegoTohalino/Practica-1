#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int res_a,res_b,res_c;
    cout<<"Digite 2 números: "<<endl;
    cin>>a>>b;
    c=a+b;
    res_a=a%2;
    res_b=b%2;
    res_c=c%2;   
    
    cout<<res_a;
    
    if(res_a>0){
        cout<<" a es impar"<<endl;
    }
    else {
        cout<<"a es par"<<endl;
    }
    if(res_b>0){
        cout<<" b es impar"<<endl;
    }
    else {
        cout<<"b es par"<<endl;
    }
    if(res_c>0){
        cout<<" c es impar"<<endl;
    }
    else {
        cout<<"c es par"<<endl;
    }
    return 0;
}