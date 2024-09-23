#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int r;
    cin>>r;
    int s;
    cin>>s;
    int polje[r][s];
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            polje[i][j]=rand()%100;
            cout<<"    "<<polje[i][j];
        }
        cout<<endl;
    }
}
