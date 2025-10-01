#include <iostream>
using namespace std;
int main ()
{   
    double x,y=1,z,n=1;
    for(x=1; x<=6; x++)
    {
        z=y-n;
        n=z;
        cout<<x<<"|"<<y<<endl;
        y=y+n;    
    }
    system("pause");
    return 0;

}
