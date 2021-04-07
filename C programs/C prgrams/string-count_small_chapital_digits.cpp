#include"header.h"

void strAllCount(char *p,int *x,int *y,int *z)
{
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
		{
			*x=(*x+1);
		}

		if(*p>='A' && *p<='Z')
		{
			*y=(*y+1);
		}

		if(*p>='0' && *p<='9')
		{
			*z=(*z+1);
		}
		p++;
	}
}


/*
Enter String: Prashant2023
 number of small character in given string is 7.
 number of chapital character in given string is 1.
 number of digits character in given string is 4.
*/