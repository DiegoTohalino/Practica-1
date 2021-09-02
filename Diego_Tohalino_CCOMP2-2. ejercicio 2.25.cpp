#include <iostream>

#include <iostream>

using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Digite 3 números: "<<endl;
    cin>>a>>b>>c;
    d=c%a;
    e=c%b;
    
    
    if(d>0){
        cout<<"a no es factor de c"<<endl;
    }
    else {
        cout<<"a es factor de c"<<endl;
    }
    if(e>0){
        cout<<"b no es factor de c"<<endl;
    }
    else {
        cout<<"b es factor de c"<<endl;
    }

    return 0;
}