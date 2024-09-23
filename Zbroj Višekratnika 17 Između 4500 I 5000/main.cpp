#include <iostream>

using namespace std;

int main()
{
    int Z;
    for(int i=4500;i<=5000;i++){
        if(i%17==0){
            Z+=i;
        }
    }
    cout<<Z;
}
