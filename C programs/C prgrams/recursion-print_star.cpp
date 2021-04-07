#include"header.h"

void recursion_pattern1(int n)
{
	if(n!=0)
	{
		printf("*");
		n--;
		recursion_pattern1(n);
	}
}


/*
output:
Enter Number: 5
*****
*/