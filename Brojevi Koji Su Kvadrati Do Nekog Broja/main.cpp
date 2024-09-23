#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int b=0;
    cin>>n;
    while(k<n){
        k=b*b;
        if(k<n){
        cout<<b*b<<endl;
        b+=1;
        }
        }
    }
