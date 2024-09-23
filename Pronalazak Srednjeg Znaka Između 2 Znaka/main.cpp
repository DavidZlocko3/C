#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"Unesi prvi znak: "<<endl;
    cin>>a;
    char b;
    cout<<"Unesi drugi znak: "<<endl;
    cin>>b;
    int C,D;
    C=a+b;
    D=C/2;
    cout<<"Srednji znak je: "<<char(D)<<endl;
    return 0;
}
