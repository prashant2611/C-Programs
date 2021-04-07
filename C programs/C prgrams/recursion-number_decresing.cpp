#include"header.h"

void recursion_descresing(int n)
{
	if(n!=0)
	{
		printf("%d",n);
		n--;
		recursion_descresing(n);
	}
}






/*
output:
Enter Number: 5
54321
*/