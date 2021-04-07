#include"header.h"

int charlastpos(char *p,char ch)
{
	int count=1,lastcount=0;
	while(*p!='\0')
	{
		if(*p==ch)
		{
			lastcount=count;
		}
		count++;
		p++;
	}
	if(lastcount==0)
	    return -1;
	else
		return lastcount;
}






/*
output:
Enter String: Prashant
Enter character: a
 Last position of a in given string is 6.
*/