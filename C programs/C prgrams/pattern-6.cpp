#include"header.h"

void pattern_6(int num)
{
	int j=1;
	for(int i=0;i<num;i++,j++)
	{
		if(j<4)
		{
			printf("%d",j);
		}
		else
		{
			j=1;
			printf("%d",j);
		}
	}
}

/*
output:
Enter number: 7
1231231
*/