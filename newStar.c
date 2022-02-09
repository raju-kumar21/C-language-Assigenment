#include "stdio.h"

void main()
{
	int row,col,n=5;
	char s=' ';
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
    printf("\n\n");
	for(row=1;row<=n;row++)
	{ 
		for(col=1;col<=row;col++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n\n");
	
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n+1-row;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
//	for(row=1;row)
printf("\n\n");
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
		
	}
	
//	printf("\n\n");
//	for(row=1;row<=n;row++)
//	{
//		
//		for(col=row;col<=n;col++)
//		{   
//			
//			printf("%d",col);
//		}
//		
//		printf("\n");
//		
//		
//		
//	}
	
	
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


