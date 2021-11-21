#include<iostream>
using namespace std;

int current = -1;
int stack[10];

bool IsFull()
{
    if(current == 10)
    {
        return true;
    }
    else{
        return false;
    }
}

void push()
{
    if(IsFull())
    {
        cout <<"Stack is Full. You can't input value!" <<endl;
    }
    {
         current++;
        cin>>stack[current];
    }

}




bool IsEmpty()
{
    if(current == -1)
    {
        return true;
    }
    else{
        return false;
    }
}



int top()
{
    int top = current;
    return top;
}

void pop()
{
    if(IsEmpty())
    {
        cout <<"Stack is Empty. You can't pop!" <<endl;
    }
    else{
        stack[current] = 0;
        current--;
    }
}


int main()
{
    cout << push();


}
