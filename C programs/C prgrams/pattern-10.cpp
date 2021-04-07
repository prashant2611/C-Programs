#include"header.h"

void pattern_10(int row,int col)
{
	int num=1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d\t",num++);
		}
		printf("\n");
	}
}

/*
output:
Enter row: 4
Enter col: 4
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/