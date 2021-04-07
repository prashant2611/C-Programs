#include"header.h"

void digit_sum(int no)
{
	int rem=0,sum=0;
    while(no!=0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("Sum of given digit is: %d.",sum);
}