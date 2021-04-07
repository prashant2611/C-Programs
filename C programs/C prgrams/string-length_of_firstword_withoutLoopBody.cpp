#include"header.h"

int strlen_firstword_withoutloop(char *p)
{
	int i=0;
	for(;*p!='\0' && *p!=' ';i++,p++);
	return i;
}






/*
Enter String: Patil Prashant
Length of first word of given string  is 5
*/