#include <iostream>
using namespace std;
int main(){
    int inicio=0;
    int final=0;
    int divisores=0;
    cout<<"ingrese desde donde quiere buscar los numeros primos: "<<endl;
    cin>>inicio;
    
    cout<<"Ingrese hasta donde: "<<endl;
    cin>>final;
    for(int i=inicio;i<=final;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                divisores++;
            }
        }
        if(divisores==0){
            cout<<i<<endl;
        }
        divisores=0;
    }
    
    return 0;
}
