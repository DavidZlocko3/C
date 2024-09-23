#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Unesite stranice a,b,c pri cemu c ne mora nuzno biti hipotenuza"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if (c>a&&c>b){
        int hip,str;
        hip=c*c;
        str=a*a+b*b;
        if (str%hip==0){
            cout<<"C je hipotenuza trokuta abc."<<endl;
        }
        else{
            cout<<"Trokut nije pravokutan, ali da bi bio pravokutan hipotenuza bi mu bila c."<<endl;
        }
    }
    if (b>a&&b>c){
        int hip1,str1;
        hip1=b*b;
        str1=a*a+c*c;
        if (str1%hip1==0){
            cout<<"B je hipotenuza trokuta abc."<<endl;
        }
        else{
            cout<<"Trokut nije pravokutan, ali da bi bio pravokutan hipotenuza bi mu bila b."<<endl;
        }
    }
    if (a>b&&a>c){
        int hip2, str2;
        hip2=a*a;
        str2=b*b+c*c;
        if (str2%hip2==0){
            cout<<"A je hipotenuza trokuta abc. "<<endl;
        }
        else{
            cout<<"Trokut nije pravokutan, ali da bi bio pravokutan hipotenuza bi mu bila a."<<endl;
        }
    }
    return 0;
}
