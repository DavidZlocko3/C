#include <iostream>

using namespace std;

int main()
{
    int a,a1,Z;
    cout<<"Unesite broj: "<<endl;
    cin>>a;
    Z=a;
    for(int i=0;i<99;i++){
        cout<<"Unesite broj: "<<endl;
    cin>>a1;
    if(a1==0)
        break;
    if(a1%2==0)
        Z+=a1;
    }
    cout<<"Zbroj svih unesenih parnih brojeva je: "<<Z<<endl;

}
