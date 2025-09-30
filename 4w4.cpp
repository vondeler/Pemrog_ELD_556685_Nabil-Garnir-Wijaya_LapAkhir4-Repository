#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int data;
    ifstream file("data_nol.txt");
    if(file){
        cout<<"File sukses dibuka!"<<endl;
        file>>data;
        file.close();
        cout<<"Data yang dibaca dari file:"<<data<<endl;
        system("pause");
        return 0;
}   
    else{
        cout<<"File gagal dibuka!"<<endl;
        return 1;
        system("pause");
}
}
