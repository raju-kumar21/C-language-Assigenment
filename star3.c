#include "stdio.h"
void main()
{
	int i=1,j=5,n=5;
	for(i=1;i<=n;)
	{
		if(j>=i)
		{
			printf("* ");
			j=j-1;
			printf(" ");
			continue;
		}
//		printf(" ");
		printf("\n");
		i++;
		j=j+5+1;
	}
}
