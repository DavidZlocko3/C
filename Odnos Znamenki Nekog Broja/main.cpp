#include <iostream>
using namespace std;
int main()
{
int a, c=0, b,d,e;
int f=0;
cin>>a;
    while(a!=0)
  {
     b=a%10;
     c=c*10+b;
     a/=10;
  }
    while(c!=0)
    {
       e=c%10;
       c=c/10;
       if(e>f){
        cout<<"Znamenka je veca"<<endl;
       }
       else
        cout<<"Znamenka je manja"<<endl;
       f=e;
    }
return 0;
}
