#include"header.h"

int wordcount(char *p,char *word)
{
	int count=0,i=0;
	while(*p!='\0')
	{
		if(*p==(*word))
		{
			while(*(p+i)==(*(word+i)))
			{
				i++;
			}
			if(*(word+i)=='\0')
				count++;
			i=0;
		}
		p++;
	}
	return count;
}


/*
output:
Enter String: Prashant Prashant patil Prashant
Enter word: Prashant
 Occurance of Prashant in given string is 3.
*/