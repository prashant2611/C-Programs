#include"header.h"

void fibbonacci(int no)
{
	int pre=0,next=1,res=0;
	printf("%d\n%d\n",pre,next);
	for(int i=1;i<=no;i++)
	{
		res=pre+next;
		printf("%d\n",res);
		pre=next;
		next=res;
	}
}
