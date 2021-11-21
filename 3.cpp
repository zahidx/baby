#include<iostream>
using namespace std;
//array input function
void arrayInput(int x[10][10],int r,int c)
{
    int i,j;
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            cout <<"Array [" <<i <<"][" <<j <<"]= ";
            cin >>x[i][j];
        }
    }
    cout <<endl;
}

//array print function
void printArray(int x[10][10],int r,int c)
{
    int i,j;
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            cout << x[i][j] <<" ";
        }
        cout <<endl;
    }
    cout <<endl;
}

//multiply all element with 2 in array function
void mulArray(int a[10][10],int mul[10][10],int r,int c)
{
    int i,j;
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            mul[i][j]=a[i][j]*2;
        }
    }
}


int main ()
{

    int r,c,a[10][10],b[10][10];
    cout <<"Enter row size: ";
    cin >>r;
    cout <<"Enter col size: ";
    cin >>c;
    cout <<endl;

    //calling input function.
    cout <<"Input for array" <<endl;
    arrayInput(a,r,c);
    //calling print function.
    cout <<"Array Print: "<<endl;
    printArray(a,r,c);

    //calling multiply function
    mulArray(a,b,r,c);
    cout <<"Multiply array: "<<endl;
    printArray(b,r,c);

    return 0;
}
