#include <iostream>

using namespace std;

int main()
{
    int a,Z,a1;
    cout<<"Unesite broj: "<<endl;
    cin>>a1;
    Z=a1;
    for(int i=0;i<100;i++){
            cout<<"Unesite broj: "<<endl;
        cin>>a;
        if(a==0)
            break;
        else if(a<Z)
            Z=a;
    }
    cout<<"Najmanji broj je: "<<Z<<endl;
}
