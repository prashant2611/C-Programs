#include"header.h"

int recursion_countDigit(int n)
{
	static int i=0;

	if(n!=0)
	{
		i++;
		n=n/10;
		recursion_countDigit(n);
	}
	return i;
}




/*
output:
Enter Number: 7894
4
*/