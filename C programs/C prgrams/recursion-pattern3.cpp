#include"header.h"

void recursion_pattern3(int n)
{
	static int count=0;
	if(n!=0)
	{
		printf("%d",n);
	    if(n!=0)
		{
			for(int i=0;i<count;i++)
			{
				printf("*");
			}
			count++;
			printf("\n");
			n=n/10;
			recursion_pattern3(n);
		}
	}
}






/*
output:
Enter Number: 75889
75889
7588*
758**
75***
7****
*/