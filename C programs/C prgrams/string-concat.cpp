#include"header.h"

void strconcat(char *p,char *q)
{
	p=p+strlen(p);
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
}









/*
Enter 1st String: Patil
Enter 2nd String: Prashant
concat string is PatilPrashant
*/