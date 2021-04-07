#include"header.h"

void pattern_12(int row,int col)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==1 || j==1 || i==row || j==col)
			{
				printf("*\t");
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
}

/*
output:
Enter row: 4
Enter col: 4
*       *       *       *
*       0       0       *
*       0       0       *
*       *       *       *

*/