#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"#";
    }
    cout<<endl;
    for(int k=0;k<a-2;k++){
        for(int j=0;j<a;j++){
            if(j==0 || j==a-2)
            cout<<"#";
            if(k==j){
                cout<<".";
            }
            else if(a==k+j+3){
                cout<<"-";
            }
    else
            cout<<" ";
        }
        cout<<endl;
    }
    for(int h=0;h<a;h++){
        cout<<"#";
    }
    cout<<endl;
    return 0;

}
