#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cout<<"Unesite peteroznamenkasti broj: "<<endl;
    cin>>a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    f=a%10;
    if (f>e||e>d||d>c||c>b){
        cout<<"Broj nije pravilan"<<endl;
            }
    else{
        cout<<"Broj je pravilan"<<endl;
    }
    return 0;
}
