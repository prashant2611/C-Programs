#include"header.h"

void pattern_8(int row,int col)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

/*
output:
Enter row: 3
Enter col: 3
111
222
333
*/