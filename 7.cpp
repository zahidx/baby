#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	int i,j,p=0,x=0,d=0;

	cout <<"Enter your string: ";
	cin.get(a,100);

	int n= strlen(a);

	//find the first occurrence of ','
	cout <<endl<<"After the first and last occurrence of , word is: ";
	    for(i=x ; i<n ; i++)
    {
        if(a[i]==',')
        {
            if(d==1)
            {
                for(j=p+1; j<i ; j++)
                {
                    cout <<a[j];
                }
                break;
            }

            p=i;
            x=i;
            d=1;
        }
    }

    cout  <<" ";

    //find the last one
    for(i=n ; i>=0 ; i--)
    {
        if(a[i]==',')
        {
            for(j=i+1 ; j<=n ; j++)
            {
                cout <<a[j];
            }
            break;
        }
    }
    cout <<endl;
}
