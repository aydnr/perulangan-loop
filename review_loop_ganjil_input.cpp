#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Menampilkan bilangan ganjil kecuali kelipatan 7 dan 11 "<<endl;
    cout<<"Bilangan ganjil 1-";
    cin>>n;
    for(int a=1; a<n; a++){
        if(a%2 !=0){
            if(a%7 == 0){
                continue;
            }
            if(a%11 == 0){
                continue;
            }
            cout<<a<<endl;
        }
        
    }
    
}