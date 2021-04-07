#include"header.h"

int occurance_char(char *p,char ch)
{
	int count=0;
	while(*p!='\0')
	{
		if(*p==ch)
		{
			count++;
		}
		p++;
	}
	return count;
}




/*
output:
Enter String: Prashant
Enter character: s
 Occurance of s is 1.
*/