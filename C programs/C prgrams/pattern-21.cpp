#include"header.h"

void pattern_21(int row)
{
	for(int i=0;i<row;i++)
	{
		for(int j=row;j>i;j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}





/*
output:
Enter row: 4
*       *       *       *
*       *       *
*       *
*

*/
