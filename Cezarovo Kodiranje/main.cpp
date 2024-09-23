#include <iostream>

using namespace std;

int main()
{
    //bok bok bok primim se za stok cika cika cika mrtva ti je nika ika ika odem ja ko lika ili kotar zuuu
    int CK;
    cout<<"Unesite sifru za cezarovo kodiranje(+): ";
    cin>>CK;
    char polje[100];
    char polje3[100];
    int polje2[100]={0};
    cin>>polje;
    gets(polje);
    for(int i=0;i<100;i++){
        if((polje[i]+CK)<=122){
        polje[i]=polje[i]+CK;
        }
        else{
            polje[i]=polje[i]-26;
            polje[i]=polje[i]+CK;
            polje2[i]=1;
    }
        polje3[100]=polje[100];
    }
    cout<<"ovo je vase polje:"<<polje;
    for(int i=0;i<100;i++)
        cout<<char(polje[i]-10);
    cout<<endl<<endl;
    for(int j=0;j<26;j++){
    for(int i=0;i<100;i++){
    if(polje2[i]==0){
        polje[i]=polje[i]-j;
    }
    else if(polje2[i]==1){
        polje[i]=polje[i]-j+26;
    }
    }
    cout<<endl<<"polje-"<<j<<"= "<<polje;
    polje[100]=polje3[100];
    }
}
