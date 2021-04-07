#include"header.h"

void pattern_13(int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==j)
			{
				printf("1\t");
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
1       0       0       0
0       1       0       0
0       0       1       0
0       0       0       1
*/
