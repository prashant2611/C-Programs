#include"header.h"

void digit_count(int num)
{
	int count=0;
	while(num!=0)
	{
		count++;
		num=num/10;
	}
	printf("count is: %d ",count);
}