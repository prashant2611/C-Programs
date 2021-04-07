#include"header.h"

void factorial(int no)
{
	int fact=1;//,count=0;
	for(int i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	/*while(fact%10==0)
	{
		count++;
		fact=fact/10;
	}*/
	printf("Factorial of %d is %d.",no,fact);
	//printf("%d",count);
}