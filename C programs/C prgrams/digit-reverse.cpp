#include"header.h"

void reverse(int no)
{
	int rem=0;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		printf("%d",rem);
	}
}