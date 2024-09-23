#include <iostream>

using namespace std;

int main()
{
    cout<<"Unesi prvi broj: "<<endl;
    float a;
    cin>>a;
    cout<<"Unesi drugi broj: "<<endl;
    float b;
    cin>>b;
    cout<<"Unesi treci broj: "<<endl;
    float c;
    cin>>c;
    if ((a>b)&&(a>c))
        cout<<"Najveci broj je "<<a<<endl;
    else if ((b>a)&&(b>c))
        cout<<"Najveci broj je "<<b<<endl;
    else if ((c>a)&&(c>b))
        cout<<"Najveci broj je "<<c<<endl;
    else
        cout<<"Brojevi su jednaki"<<endl;
    return 0;
}
