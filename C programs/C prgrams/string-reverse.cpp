#include"header.h"

void revstr(char *p)
{
	char *end=NULL;
	end=p+strlen(p)-1;
	char temp='\0';
	while(p<end)
	{
		temp=(*end);
		*end=*p;
		*p=temp;
		end--;
		p++;
	}
}




/*
Enter String: abcd
Reverse of given string: dcba
*/