#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m=pow(2,n);
    char res[5];
    for(int i=0;i<m;i++){
        cout<<endl;
        cout<<itoa(i,res,2);
    }
}
