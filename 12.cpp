#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[100],b[100],temp1[100],temp2[100];
    int i,j,c=1;

    cout <<"Enter your 1st string: ";
    cin >>a;

    cout <<"Enter your 2nd string: ";
    cin >>b;
    cout <<endl;

    //string copy for print
    strcpy(temp1,a);
    strcpy(temp2,b);

    //calling length function
    int n1=strlen(a);
    int n2=strlen(b);

    //sort 1st string element
    for(int i =0; i<n1; ++i)
    {
        for(int j=0; j<n1-1; ++j)
        {
            if(a[j] > a[j+1])
            {
                char t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    //sort 2nd string element
    for(int i =0; i<n2; ++i)
    {
        for(int j=0; j<n2-1; ++j)
        {
            if(b[j] > b[j+1])
            {
                char t = b[j];
                b[j] = b[j+1];
                b[j+1] = t;
            }
        }
    }

   //compare two string
   for (i=0 ; i<n1 ; i++)
   {
        if (a[i] != b[i])
        {
            c=0;
        }
   }

   if(c==1 && n1==n2)
   {
       cout <<temp1 <<" and " <<temp2 <<" are anagrams of each other" <<endl;;
   }
   else{
       cout <<temp1 <<" and " <<temp2 <<" NOT anagrams of each other" <<endl;
   }
   cout <<endl <<endl;

    return 0;
}









