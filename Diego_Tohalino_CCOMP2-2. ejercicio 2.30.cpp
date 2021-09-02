#include <iostream>
using namespace std;
int main(){

    int a,b,BMI;
    cout<<"Ingrese su altura en pulgadas: "<<endl;
    cin>>a;
    cout<<"Ingrese su peso en libras: "<<endl;
    cin>>b;

    BMI=(b*703)/(a*a);

    cout<<"Evaluacion BMI: "<<endl;

    if(BMI<18.5){
        cout<<"Peso bajo."<<endl;
    }
    else if(18<=BMI){
        if(BMI<=28.9){
            cout<<"Peso normal."<<endl;
        }
    }
    else if(28.9<BMI){	 
        if(BMI <=29.9){
            cout<<"Exceso de peso."<<endl;
        }    
    }
    else{
        cout<<"Sobrepeso."<<endl;

    }



    return 0;

}