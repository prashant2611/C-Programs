#include"header.h"

void nochar(char *p,int n)
{
  while(*p!='\0' && n!=0)
  {
	  printf("%c",*p);
	  p++;
	  n--;
  }
}




/*
output:
Enter String: Prashant
Enter number: 3
Pra
*/