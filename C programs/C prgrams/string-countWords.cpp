#include"header.h"

int strwordcount(char *p)
{
	int count=0;
	while(*p!='\0')
	{
	   while(*p==' ')
	   {
		   p++;
	   }
	   if(*p=='\0')
		   return count;

	   while(*p!=' ' && *p!='\0')
	   {
		   p++;
	   }
	   count++;
	   p++;
	}

	return count;
}







/*
Enter 1st String: Prashant    Patil
Number of words in given string is 2.
*/