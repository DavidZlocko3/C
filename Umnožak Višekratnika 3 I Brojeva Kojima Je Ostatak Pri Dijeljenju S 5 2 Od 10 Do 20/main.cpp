#include <iostream>

using namespace std;

int main()
{
    int U=1;
    for(int i=10;i<=20;i++){
        if(i%3==0||i%5==2){
            U*=i;
        }
    }
    cout<<U;
}
