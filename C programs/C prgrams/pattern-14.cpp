#include"header.h"

void pattern_14(int row,int col)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==1 || j==1 || i==row || j==col || i==j)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}





/*
output:
Enter row: 4
Enter col: 4
1111
1101
1011
1111
*/
