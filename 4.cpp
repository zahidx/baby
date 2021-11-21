#include<iostream>
using namespace std;
int main()
{
    int i,j,a[20][20],sumM=0,sumS=0;

    cout <<"3*3 Array" <<endl <<"Please enter input" <<endl;
    //input for Matrix
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout <<"Array [" <<i <<"][" <<j <<"]= ";
            cin >>a[i][j];
        }
    }
    cout <<endl;

    cout <<endl <<"Array : " <<endl;

    //print 2D array Matrix A
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout << a[i][j] <<"  ";
        }
        cout <<endl;
    }

    //for main diagonal
    cout <<endl <<"main diagonal are: ";
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            if(i==j)
            {
                sumM+=a[i][j];
                cout <<a[i][j] <<" ";
            }
        }
    }

    cout <<endl <<"Sum of main diagonal is: " <<sumM <<endl;

    //for secondary diagonal
    cout  <<endl <<"secondary diagonal are: ";
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            if(i+j == 3-1)
            {
                sumS+=a[i][j];
                cout <<a[i][j] <<" ";
            }
        }
    }

    cout <<endl<<"Sum of secondary diagonal is: " <<sumS <<endl;

}



