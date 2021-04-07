#include"header.h"

void pattern_11(int row,int col)
{
	int num=1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++,num++)
		{
			if(num<=9)
			{
			printf("%d\t",num);
			}
			else
			{
				num=1;
				printf("%d\t",num);
			}
		}
		printf("\n");
	}
}



/*
output:
Enter row: 4
Enter col: 5
1       2       3       4       5
6       7       8       9       1
2       3       4       5       6
7       8       9       1       2
*/