#include"header.h"

void pattern_7(int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

/*
output:
Enter row: 3
Enter col: 3
***
***
***
*/