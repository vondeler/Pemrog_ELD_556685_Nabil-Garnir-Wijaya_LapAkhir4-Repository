#include<iostream>
#include<fstream>
using namespace std;
int main(){
int data,i;

    ifstream file("data_input.txt");
    if(file){
        cout<<"File sukses dibuka!"<<endl;

        for(i=0;i<7;i++){
        file>>data;
        cout<<data<<endl;
}

        file.close();
        system("pause");
        return 0;
}
    else{
        cout<<"File gagal dibuka!"<<endl;
        system("pause");
        return 1;
}
}