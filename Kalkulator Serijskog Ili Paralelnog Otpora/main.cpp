#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"Unesite serijski(s) ili paralelni(p) spoj"<<endl;
    cin>>a;
    int b,c,d,e;
    double U;
    cout<<"Unesite 4 otpora"<<endl;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if (a=='s'){
        U=b+c+d+e;
        cout<<"Ukupan otpor je: "<<U<<endl;
    }
    else if (a=='p'){
        U=(1/e)+(1/b)+(1/c)+(1/d);
        cout<<"Ukupan otpor je: "<<U<<endl;
    }
    return 0;
}
