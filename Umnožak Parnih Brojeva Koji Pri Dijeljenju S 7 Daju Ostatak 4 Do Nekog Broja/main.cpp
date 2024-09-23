#include <iostream>

using namespace std;

int main()
{
    int a;
    int Z=1;
    cout<<"Unesite zadnji broj: "<<endl;
    cin>>a;
    for(int i=0;i<=a;i++){
        if(i%2==0&&i%7==4){
            Z=Z*i;
        }
    }
    cout<<Z<<endl;
}
