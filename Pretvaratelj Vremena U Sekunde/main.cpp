#include <iostream>

using namespace std;

int main()
{
    float h,m,s,h1,m1,u;
    cout<<"Unesi sate: "<<endl;
    cin>>h;
    cout<<"Unesi minute: "<<endl;
    cin>>m;
    cout<<"Unesi sekunde: "<<endl;
    cin>>s;
    h1=h*3600;
    m1=m*60;
    u=h1+m1+s;
    cout<<"To Je ukupno "<<u<<" sekunda"<<endl;
    return 0;

}
