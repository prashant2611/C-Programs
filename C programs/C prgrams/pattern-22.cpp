#include"header.h"

void pattern_22(int row)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0\t");
			}
			else
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
}






/*
output:
Enter row: 5
1
1       0
1       0       3
1       0       3       0
1       0       3       0       5
*/