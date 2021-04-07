#include"header.h"

int countsmallchar(char *p)
{
	int count=0;
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
			count++;
		p++;
	}
	return count;
}




/*
output:
Enter String: PPrrAAs
 number of small character in given string is 3.
*/