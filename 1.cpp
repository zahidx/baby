#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c,a[20][20];
    cout <<"For diagonal Row==Col" <<endl;

    cout <<"Enter your row: ";
    cin >>r;
    cout <<"Enter your col: ";
    cin >>c;

    //input for Matrix
    cout <<endl;
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            cout <<"Array [" <<i <<"][" <<j <<"]= ";
            cin >>a[i][j];
        }
    }
    cout <<endl;

    cout <<endl <<"Matrix : " <<endl;

    //print 2D array Matrix A
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            cout << a[i][j] <<"  ";
        }
        cout <<endl;
    }
    cout <<"diagonal after replace with 0 " <<endl <<endl;

    //diagonal replace with 0
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            if(i==j)
            {
                a[i][j]=0;
            }
        }
    }

    //print after replace diagonal
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            cout << a[i][j] <<"  ";
        }
        cout <<endl;
    }
}



