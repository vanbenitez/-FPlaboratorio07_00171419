#include <iostream>

using namespace std;

int main(){
    int n, num1, num2;
    
    cout<<"Ingrese el numero de interacion ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<"Ingrese el primer valor ";
        cin>>num1;
        cout<<"Ingrese el segundo valor ";
        cin>>num2;
        
        if(num1>num2){
            cout<<num1<<" Es mayor que "<<num2<<endl;
        }
        if(num2>num1){
            cout<<num2<<" Es mayor que "<<num1<<endl;
        }
        if(num1==num2){
            cout<<num1<<" Es igual a "<<num2<<endl;
        }
    }

    return 0;
}

