#include <iostream>

using namespace std;

int main()
{
    int a,A,B,C;
    cout<<"Unesi cijeli troznamenkasti broj: "<<endl;
    cin>>a;
    A=a%10;
    a=a/10;
    B=a%10;
    a=a/10;
    C=a%10;
    cout<<"Zbroj svih znamenaka je: "<<A+B+C<<endl;
    return 0;
}
