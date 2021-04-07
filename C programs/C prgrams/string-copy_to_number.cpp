#include"header.h"

void strcpyno(char *p,char *q,int n)
{
	while(*p!='\0' && n!=0)
	{
		*q=*p;
		p++;
		n--;
		q++;
	}
}


/*
Enter String: Prashant
Enter number: 5
copy string till 5 char is Prash
*/

