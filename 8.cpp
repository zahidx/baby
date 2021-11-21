#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char c[100];
   cout <<"Enter your string: ";
   cin.get(c,100);

   int n=strlen(c);

   //count vowels
   int i,v=0;
    for(i=0 ; i<n ; i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')
        {
            v=v+1;
        }
    }

    cout <<"Number of vowels is: " <<v <<endl;
    //count consonants
    int co=0;
    for(i=0 ; i<n ; i++)
    {
        if( c[i]!=' ' && c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' && c[i]!='A' && c[i]!='E' && c[i]!='I' && c[i]!='O' && c[i]!='U' && c[i] !='0' && c[i]!='1' && c[i] !='2' && c[i]!='3' && c[i] !='4' && c[i]!='5' && c[i] !='6' && c[i]!='7' && c[i] !='8' && c[i]!='9')
        {
            co+=1;
        }
    }

    cout <<"Number of consonants is: " <<co <<endl;

    //digit count
    int d=0;
    for(i=0 ; i<n ; i++)
    {
        if( c[i] >'0' && c[i]<'9')
        {
            d+=1;
        }
    }

    cout <<"Number of digit is: " <<d <<endl;

    //space count
    int s=0;
    for(i=0 ; i<n ; i++)
    {
        if( c[i] ==' ')
        {
            s+=1;
        }
    }

    cout <<"Number of space is: " <<s <<endl;

}
