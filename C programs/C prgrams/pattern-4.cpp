#include"header.h"

void pattern_4(int num)
{
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("*");
		}
		else
		{
			printf("%d",i);
		}
	}
}


/*
output:
Enter number: 8
1*3*5*7*
*/