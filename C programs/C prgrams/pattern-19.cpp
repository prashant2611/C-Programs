#include"header.h"

void pattern_19(int row,int col)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i%2==0)
			{
				printf("*\t");
			}
			else
			{
				printf("1\t");
			}
		}
		printf("\n");
	}
}






/*
output:
Enter row: 4
Enter col: 4
1       1       1       1
*       *       *       *
1       1       1       1
*       *       *       *
*/