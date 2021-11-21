#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	int i,j,x=0,p=0,d=0;

	cout <<"Enter your string: ";
	cin.get(a,100);

	int n= strlen(a);
	cout <<endl <<"reverse: ";

        for(i=x ; i<n ; i++)
    {
        if(a[i]==' ' || a[i]=='.' || a[i]==',' || a[i]=='   ')
        {
            for(j=i-1; j>=p ; j--)
            {
                cout <<a[j];
            }
            if(d==0 && a[i]=='.')
            {
                 cout <<".";
            }
            else if(d==0 && a[i]==' ')
            {
                 cout <<" ";
            }
            else if(d==0 && a[i]==',')
            {
                 cout <<",";
            }

            else if(d==0 && a[i]=='  ')
            {
                 cout <<"   ";
            }
            p=i;
            x=i;
            d=1;
        }
    }

    //check from reverse
    for(i=n ; i>=0 ; i--)
    {
        if(a[i]==' ' || a[i]=='.' || a[i]==',' || a[i]=='   ')
        {
            for(j=n-1 ; j>i ; j--)
            {
                cout <<a[j];
            }
             break;
        }
    }

    cout <<endl;
}
