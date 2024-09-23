#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int polje[100];
    for(int i=0;i<100;i++){
        polje[i]=rand()%101;
        if(i%10==0){
            cout<<polje[i]<<endl;
        }

}
}
