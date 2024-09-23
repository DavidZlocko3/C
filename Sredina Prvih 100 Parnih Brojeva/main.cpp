#include <iostream>

using namespace std;

int main()
{
    int A,S;
    for(int i=0;i<=200;i+=2){
        A+=i;
    }
        S=A/100;
        cout<<"Aritmeticka sredina prvih 100 parnih brojeva je: "<<S<<endl;
}
