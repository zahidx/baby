#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  	char x[100];
  	int i, len, c=0;

  	cout <<endl <<"Please Enter any String :  ";
  	cin.get(x,100);

  	len = strlen(x);

  	for(i = 0; i < len; i++)
	{
		if(x[i] != x[len-i-1])
		{
			c=1;
			break;
		}
	}

	if(c == 0)
	{
		cout <<endl <<"'" <<x <<"'" " is a Palindrome String";
	}
	else
	{
		cout <<endl <<"'" <<x <<"'" << " NOT Palindrome String";
	}
	cout <<endl;

  	return 0;
}
