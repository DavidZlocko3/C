#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=1;
    cin>>n;
    for(a;n;a++){
        if(n%a==0){
            cout<<a<<endl;
        }
    }
}
