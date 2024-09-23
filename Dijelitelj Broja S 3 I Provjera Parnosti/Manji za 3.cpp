#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Upisi neki broj"<<endl;
    cin>>a;
    while (a>2){
        a=a-3;
        if (a%2==0)
            cout<<a<<" je paran broj"<<endl;
        else
            cout<<a<<" je neparan broj"<<endl;
    }
    return 0;
}
