#include "stdio.h"
void main()
{
	int i=1,j=0,n=5;
	for(i=1;i<=5;)
	{

			if(j<i)
			{
				printf("* ");
				j++;
				continue;
			}
			printf("\n");
//			printf(" ");
		  	i++;
			j=0;
			
}
getch();
}
