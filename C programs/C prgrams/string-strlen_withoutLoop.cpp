#include"header.h"

int strlen_withoutloop(char *p)
{
	int i=0;
	for(;*p!='\0';i++,p++);
	return i;
}

/*
Enter String: Patil
Length of given string is 5
*/

int strlen_withoutInteger(char *p)
{
	char *q=p;
	for(;*p!='\0';p++);

	return p-q;
}

/*
Enter String: Prashant
Length of given string is 8
*/
