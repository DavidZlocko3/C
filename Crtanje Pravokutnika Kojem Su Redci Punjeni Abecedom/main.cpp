#include <iostream>

using namespace std;

int main()
{
    int  a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a;i++){
    cout<<"X";
}
    for(int h=1;h<=a;h++){
            cout<<endl;
    for(int j=1;j<=a;j++){
        if(j==1||j==a)
            cout<<"X";
        else{
            cout<<char(64+h);
        }
    }
    }
    cout<<endl;
    for(int k=0;k<a;k++){
        cout<<"X";
    }
    cout<<endl;
}
