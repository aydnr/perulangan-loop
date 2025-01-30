//7 menghitung dan menampilkan faktorial 
#include<iostream>
using namespace std;
void bilanganfaktorial(int angka){
    int faktorial = 1;
    for (int i = 1; i <= angka; i++)
    faktorial = faktorial*i;
    cout<<"Faktorial dari = "<<faktorial;
}
int main (){
    int angka;
    cout<<"Masukan angka = ";
    cin>>angka;
    bilanganfaktorial(angka);
   
}