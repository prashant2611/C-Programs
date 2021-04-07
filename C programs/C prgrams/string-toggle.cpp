#include"header.h"

void toggle(char *p)
{
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
		{
			(*p)=(*p)-32;
		}
		if(*p>='A' && *p<='Z')
		{
			(*p)=(*p)+32;
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