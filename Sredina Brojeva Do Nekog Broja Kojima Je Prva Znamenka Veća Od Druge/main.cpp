#include <iostream>

using namespace std;

int main()
{
    int n,P,D,e,f,z,A;
    int b=0;
    cout<<"Zadnji broj je(max 99): "<<endl;
    cin>>n;
    for(int i=10;i<=n;i++){
        e=i;
        f=i;
        D=e%10;
        e=e/10;
        P=e%10;
        if(P>D){
            z+=f;
            b=b+1;
        }
    }
    A=z/b;
    cout<<"Aritmeticka sredina svih brojeva kojima je prva znamenka veca od drugih do unesenog broja je: "<<A<<endl;
}
