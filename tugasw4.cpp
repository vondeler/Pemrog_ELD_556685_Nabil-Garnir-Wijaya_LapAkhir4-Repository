#include <iostream>
using namespace std;

int main ()
{
    int a,m=0;
    while (m==1 || m==0)
    {
        cout<<"Masukan sebuah bilangan: ";
        cin>>a;
        if (a > 0)
        {
        m = a % 2;
        a=0;
        if (m==1){
            cout<<"Bilangan Yang anda Masukan adalah Bilangan Ganjil"<<endl;}
        else{
            cout<<"Bilangan Yang anda Masukan adalah Bilangan Genap"<<endl;}}
        else if (a==0){
        m = 2;
        cout<<"Program berakhir"<<endl;
        cout<<"Bilangan Yang anda Masukan adalah NOl atau Input Salah"<<endl;}
        else {
        m = 2;
        cout<<"Program berakhir"<<endl;
        cout<<"Bilangan Yang anda Masukan adalah Negatif"<<endl;}}
    system("pause");
    return 0;
    } 
