#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Unesi Katetu trokuta: "<<endl;
    double a,c,b,P,b1;
    cin>>a;
    cout<<"Unesi hipotenuzu trokuta: "<<endl;
    cin>>c;
    b1=a*a+c*c;
    b=sqrt(b1);
    P=b*a/2;
    cout<<"Povrsina je: "<<P<<endl;
    cout<<"Druga kateta je: "<<b<<endl;
}
