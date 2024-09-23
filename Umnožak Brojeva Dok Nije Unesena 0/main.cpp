#include <iostream>

using namespace std;

int main()
{
    int a;
    int Mn=1;
    while(a<0||a>0){
        cin>>a;
        if(a<0||a>0)
            Mn=Mn*a;
    }
    cout<<Mn<<endl;
}
