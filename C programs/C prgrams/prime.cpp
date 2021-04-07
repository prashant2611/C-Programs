#include"header.h"

void prime(int no)
{
	int flag=0;
	for(int i=2;i<no || no<2 ;i++)
	{
		if(no%i==0 || no<2 )
		{
			printf("Given number is not prime.");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Given number is prime.");
	}
}