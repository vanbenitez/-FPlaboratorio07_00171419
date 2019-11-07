    #include <iostream>
    using namespace std;
    int main(){
        int inicio=0;
        int final=0;
        int suma;
        cout<<"ingrese desde donde quiere buscar: "<<endl;
        cin>>inicio;
        suma=0;
        cout<<"Ingrese hasta donde: "<<endl;
        cin>>final;
        for(int i=inicio;i<=final;i++){
            if(i%2!=0){
                suma+=i;
            }
        }
        cout<<suma;
    }
