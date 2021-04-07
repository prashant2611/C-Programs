#include"header.h"

void pattern_9(int row,int col)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

/*
output:
Enter row: 4
Enter col: 4
1234
1234
1234
1234
*/