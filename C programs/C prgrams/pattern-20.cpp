#include"header.h"

void pattern_20(int row)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}




/*
output:
Enter row: 4
*
*       *
*       *       *
*       *       *       *

*/