#include<iostream>
#include<fstream>
using namespace std;
int main(){
int data,i=0;

    ifstream file("data_input.txt");
    if(file){
        cout<<"File sukses dibuka!"<<endl;

    while(file>>data){
        
        cout<<data<<endl;
        i++;
    }

    file.close();
    system("pause");
    return 0;
}
    else
{
    cout<<"File gagal dibuka!"<<endl;
    system("pause");
    return 1;
}
}