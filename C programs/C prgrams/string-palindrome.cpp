#include"header.h"

int strpalindrome(char *p)
{
	char *q=NULL;
	q=p+strlen(p)-1;
	while(*p==*q)
	{
		if(p>q)
			return 1;
		p++;
		q--;
	}
	return 0;
}






/*
Enter String: abba
Entered string is palindrome.
*/