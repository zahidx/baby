#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    int oc[100],b[100];
    int n,i,j,c,maxi,k=0,z=0,v;

    cout << "Enter string: ";
    cin.get(a,100);

    n=strlen(a);

    for(i=0; i<n; i++)
    {
        oc[i]= -1;
    }

    for(i=0; i<n; i++)
    {
        c=1;
        for(j=i+1; j<n; j++)
        {

            if(a[i]==a[j])
            {
                c++;
                oc[j] = 0;
            }
        }


        if(oc[i] != 0)
        {
           oc[i] = c;
        }
    }
    maxi=b[0];

    cout <<endl <<"Frequency of all elements of string :" <<endl ;
    for(i=0; i<n; i++)
    {
        if(oc[i] != 0 && a[i]!=' ' && a[i]!=',' && a[i]!='.')
        {
            cout << a[i] << " occurs times : "  <<oc[i] <<endl;
            b[k]=oc[i];
            k+=1;
        }
            for(v=0; v<k; v++)
            {
                if(maxi<b[v])
                {
                    maxi=b[v];
                    z=i;
                }
            }
    }

    cout <<endl <<"maximum occurrence alphabet is: '" << a[z] << "'\nOccurs "<< maxi  <<" Times in string" <<endl;

    return 0;
}
