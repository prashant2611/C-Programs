#include"header.h"

void pattern_23(int no)
{
	for(int i=1;i<=no;i++)
	{
		printf("%d",i);
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
	}
}







/*
output:
Enter number: 4
1*2**3***4****

*/