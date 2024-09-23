#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Upisi stranicu kvadrata: "<<endl;
    cin>>a;
    int Povk;
    Povk=(a*a);
    double r;
    r=(a/2);
    double P;
    P=(r*r*3.14);
    double O;
    O=(2*r*3.14);
    double Omjer;
    Omjer=(Povk/P);
    cout<<"Povrsina kvadrata je: "<<Povk<<endl;
    cout<<"Povrsina kruga je: "<<P<<endl;
    cout<<"Opseg kruga je: "<<O<<endl;
    cout<<"Omjer kruga i kvadrata je: 1:"<<Omjer<<endl;
    return 0;
}
