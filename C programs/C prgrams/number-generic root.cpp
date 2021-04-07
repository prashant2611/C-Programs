#include"header.h"

void generic_root(int no)
{
	int sum=0,rem=0;

	while(no>9)
	{
		while(no!=0)
		{
			rem=no%10;
			sum=sum+rem;
			no=no/10;
		}
		no=sum;
		sum=0;
	}

	printf("Generic root of given number is %d.",no);
}