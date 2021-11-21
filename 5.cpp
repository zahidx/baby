#include <iostream>
using namespace std;
int main ()
{
   int a[16],i;
   cout <<"Array size 16" <<endl <<endl;

   //taking input
   for(i=0 ; i<16 ; i++)
   {
       cout <<"a[" <<i <<"]= ";
       cin >>a[i];
   }

   cout <<endl <<"1D array: ";
   for(i=0 ; i<16 ; i++)
   {
       cout <<a[i] <<" ";
   }

   int k=0,j,x[4][4];

    for (i=0 ; i<4 ; i++)
    {
        for (j=0 ; j<4 ; j++)
        {
            x[i][j]=a[k];
            k+=1;
        }
    }

   cout <<endl <<"2D array: " <<endl;
   //print 2D array
   for (i=0 ; i<4 ; i++)
   {
        for (j=0 ; j<4 ; j++)
        {
            cout <<x[i][j] <<" ";
        }
        cout <<endl;
    }
}










