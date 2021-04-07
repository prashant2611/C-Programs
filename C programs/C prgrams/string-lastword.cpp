#include"header.h"

char* lastword(char *p)
{
	char *q=NULL;
	q=p+strlen(p)-1;

	if(p<=q)
	{
		while(*q==' ')
		{
			q--;
		}
		while(*q!=' ' && p<=q)
		{
			q--;
		}
		p=q+1;
	}
	return p;
}






/*
Enter 1st String: Prashant Patil
Last word of given string is Patil
*/