#include <iostream>
using namespace std;
int main(){
    int edad,mhr,mhr1,mhr2,mhr3;
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;

    mhr=220-edad;
    mhr1=208-0.7*edad;
    mhr2=207-0.7*edad;
    mhr3=211-0.64*edad;

    cout<<"Sus diferentes MHR son: "<<endl;
    cout<<"Analicis MHR_1; "<<mhr<<endl;
    cout<<"Analicis MHR_2; "<<mhr1<<endl;
    cout<<"Analicis MHR_3; "<<mhr2<<endl;
    cout<<"Analicis MHR_4; "<<mhr3<<endl;

    return 0;
}