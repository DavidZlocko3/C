#include <iostream>

using namespace std;

int main()
{
    int a,b,j,Z;
    for(int i=1;i<=20;i++){
        j=i;
        b=j%10;
        j=j/10;
        a=j%10;
        if(b<5||a%2==1){
            Z+=i;
        }
    }
    cout<<Z;
}
