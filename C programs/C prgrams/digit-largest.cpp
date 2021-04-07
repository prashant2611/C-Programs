#include"header.h"

void digit_largest(int num)
{
	int max=0;
	while(num!=0)
	{
		int rem=num%10;
		if(max<rem)
		{
			max=rem;
		}
		num=num/10;
	}
	printf("Max digit is: %d",max);
}
