#include"header.h"

int white_space(char *p)
{
	int count=0;

	while(*p!='\0')
	{
		if((*p)==' ')
		{
			count++;
		}
		p++;
	}
	return count;
}

/*
output:
Enter String: Prashant Patil
Number of white spaces: 1
*/