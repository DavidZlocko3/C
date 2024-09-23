#include <iostream>

using namespace std;

int main()
{
    int polje[100];
    for(int i=0;i<100;i++){
        polje[i]=rand()%100;
        if(i%2==0){
            cout<<polje[i]<<endl;
        }
    }
}
