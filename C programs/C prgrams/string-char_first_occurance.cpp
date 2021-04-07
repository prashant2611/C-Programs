#include"header.h"

int charfirstpos(char *p,char ch)
{
	int count=1;

	while(*p!='\0')
	{
		if(*p==ch)
		{
			return count;
		}
		count++;
		p++;
	}
	return -1;
}






/*
output:
Enter String: Prashant
Enter character: a
 First position of a in given string is 3.
*/