
#include"header.h"

void pattern_5(int num)
{
	int j=1;
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("*");
		}
		else
		{
			printf("%d",j);
			j++;
		}
	}
}

/*
output:
Enter number: 12
1*2*3*4*5*6*
*/
