#include <iostream>

using namespace std;

int main()
{
    int a,s;
    for(int i=0;i<=400;i+=4){
        a+=i;
    }
    s=a/100;
    cout<<"Aritmeticka sredina prvih 100 višekratnika broja 4 je: "<<s<<endl;
}
