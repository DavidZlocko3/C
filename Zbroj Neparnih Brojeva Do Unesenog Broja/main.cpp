#include <iostream>

using namespace std;

int main()
{
    int a,S;
    cout<<"Unesite zadnji broj: "<<endl;
    cin>>a;
    for(int i=0;i<=a;i++){
        if(i%2==1)
            S+=i;
    }
    cout<<"Zbroj svih neparnih brojeva do tog broja je: "<<S<<endl;
}
