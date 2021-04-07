#include"header.h"

int strcompair(char *p,char *q)
{
	while(*p==*q & *p!='\0')
	{
		p++;
		q++;
		if(*p=='\0' && *q=='\0')
			return 1;
	}
	return 0;
}


/*
Enter 1st String: Prashant
Enter 2nd String: Prashant
Both strings are equal.
*/