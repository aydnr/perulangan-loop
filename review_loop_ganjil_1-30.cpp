#include <iostream>
using namespace std;

int main(){
    cout<<"Nilai ganjil dari 1-30 tanpa kelipatan 3"<<endl;
    for(int a=1; a<=30; a++){
        if(a%2 !=0){
            if(a%3 == 0){
                continue;
            }
            cout<<a<<endl;
        }
        
    }
    
}