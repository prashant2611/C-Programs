#include"header.h"

void digit_smallest(int num)
{
	int min=9;
	while(num!=0)
	{
		int rem=num%10;
		if(min>rem)
		{
			min=rem;
		}
		num=num/10;
	}
	printf("Smallest digit is: %d",min);
}