#include"header.h"

void pattern_15(int row,int col)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==1 || j==1 || i==row || j==col)
			{
				printf("%d\t",j);
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
Enter row: 4
Enter col: 4
1       2       3       4
1       0       0       4
1       0       0       4
1       2       3       4
*/