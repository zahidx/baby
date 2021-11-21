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

//sum of array A and B function
void sumArray(int a[10][10],int b[10][10],int c[10][10],int r,int col)
{
    int i,j;
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
}

//main function
int main ()
{

    int r,col,a[10][10],b[10][10],c[10][10];
    cout <<"Enter row size: ";
    cin >>r;
    cout <<"Enter col size: ";
    cin >>col;
    cout <<endl;

    //calling input function.
    cout <<"Input for A array" <<endl;
    arrayInput(a,r,col);
    cout <<"Input for B array" <<endl;
    arrayInput(b,r,col);

    //calling print function.
    cout <<"A array: "<<endl;
    printArray(a,r,col);
    cout <<"B array: "<<endl;
    printArray(b,r,col);

    //calling sum function
    sumArray(a,b,c,r,col);
    cout <<"C array: "<<endl;
    printArray(c,r,col);


    return 0;
}
