#include"header.h"

int strpalindrome2(char *p)
{
	char *q=NULL;
	q=p+strlen(p)-1;

	while(*p==*q || *p==(*q+32) || (*p+32)==*q)
	{
		if(p>q)
			return 1;
		p++;
		q--;
	}
	return 0;
}









/*
Enter String: PRarp
Entered string is palindrome.
*/