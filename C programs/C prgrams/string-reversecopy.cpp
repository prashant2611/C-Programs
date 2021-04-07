#include"header.h"

void stringreversecopy(char *p,char *q)
{
	char *temp=NULL;
	temp=p+strlen(p)-1;

	while(p<=temp)
	{
		*q=*temp;
		temp--;
		q++;
	}
}



/*
Enter String: Patil
Reverse copy string is litaP
*/









/*
Enter String: Prashant
copy string is Prashant
*/