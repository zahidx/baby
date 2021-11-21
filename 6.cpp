#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	char ch[7]="orange";

	int i,j,x=0,p=0,k=0,orange=0;

	cout <<"Enter your string: ";
	cin.get(a,100);

	int n= strlen(a);

	for(i=0 ; i<6 ; i++)
    {
        if(a[i]==ch[i])
        {
            orange=1;
        }
    }

	for(i=x ; i<n ; i++)
    {
        if(a[i]==' ' || a[i]=='.' || a[i]==',')
        {
            x=i;
            {
                for(j=p ; j<=i ; j++)
                {
                    if(ch[k]==a[j])
                    {
                        orange=1;
                        break;
                        k+=1;
                    }
                }
            }
            p=x;
        }
    }

    //check from reverse
    k=0;
    for(i=n ; i>=0 ; i--)
    {
        if(a[i]==' ' || a[i]=='.' || a[i]==',')
        {
            for(j=i ; j<=n-1 ; j++)
            {
                if(ch[k]==a[j])
                    {
                        orange=1;
                        break;
                        k+=1;
                    }
            }
            break;
        }
    }
    cout <<endl;

    if(orange==1)
    {
        cout <<"'orange' is present in string";
    }
    else{
        cout <<"Not present 'orange' in this string ";
    }

    cout <<endl;
}
