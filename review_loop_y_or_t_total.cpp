#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int i = 0, total, bilangan;
    
    while(ulangi == 'y'){
    cout<<"Masukan bilangan: ";
    cin>>bilangan;
    total += bilangan;
 
        cout<<"Mau memasukan data lagi?\n";
        cout<<"Jawab (y/t): ";
        cin >> ulangi;
    }

    cout<<"\n\n----------\n";
    cout<<"Perulangan Selesai!\n";
    cout<<"Total bilangan = "<<total;

    return 0;
}