#include"header.h"

void recursion_pattern2(int n)
{
	if(n!=0)
	{
		printf("*");
		n--;
		recursion_pattern2(n);
		printf("$");
	}
}







/*
output:
Enter Number: 4
****$$$$
*/