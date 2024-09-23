#include <iostream>

using namespace std;

int main()
{
    int b,a,c;
    int d=0;
    cin>>b;
    a=b%10;
    b=b/10;
    while(b!=0){
        c=b%10;
        b=b/10;
        if(c>a){
            cout<<"Nije pravilan"<<endl;
            d=1;
            break;
        }
    }
    if(d==0)
        cout<<"Broj je pravilan"<<endl;
}
