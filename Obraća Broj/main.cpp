#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int uneseni;
    int uneseni2;
    int zbroj=0;
    int a=0;
    int b=0;
    cin>>uneseni;
    uneseni2=uneseni;
    for(;uneseni>0;){
     a+=uneseni%10;
     if(a>1 || a<1)
        a=1;
     b+=a;
     uneseni/=10;
    }
    int d=b-1;
    int c=pow(10,d);
    for(;uneseni2>0;){
        zbroj+=uneseni2%10*c;
        uneseni2/=10;
        c/=10;
    }
    cout<<zbroj;
    return 0;
}
