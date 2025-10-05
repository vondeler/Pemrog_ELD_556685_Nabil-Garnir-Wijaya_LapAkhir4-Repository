#include <iostream>
#include <cmath>
using namespace std;
int main ()
{   
    int x,y,z=1;
    y=z;
    cout<<"Solusi Pertama dengan 3 Variabel: "<<endl;
    //solusi pertama
    for(x=1; x<=6; x++)
    {
        y=y+z;
        z+=2;
        cout<<x<<"|"<<y<<endl;
    }
    system("pause");
    cout<<"Solusi Kedua dengan 2 Variabel: "<<endl;
    //solusi kedua
    for(x=1; x<=6; x++)
    {
        y = (pow(x,2) + 1);
        cout<<x<<"|"<<y<<endl;
    }
    system("pause");
    return 0;
}
