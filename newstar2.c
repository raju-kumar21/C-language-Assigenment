#include "stdio.h"
void main()
{
	int row,col,n=5;
	char s=' ';
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n+1-row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
	}
	printf("\n\n");
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
		
	}
		
	printf("\n\n");
	for(row=1;row<=n;row++)
	{
		
		for(col=1;col<=n;col++)
		{   
			if(col>=row && col<=5)
			{
			printf("%d",col);
	     	}
	     	else
	     	{
	     		printf(" ");
			 }
		}
		
		printf("\n");
	
	}
	printf("\n\n");
	for(row=1;row<=n;row++)
	{
		
		for(col=1;col<=n;col++)
		{   
			if(col>=row && col<=5)
			{
			printf("*");
	     	}
	     	else
	     	{
	     		printf(" ");
			 }
		}
		
		printf("\n");
}


printf("\n");


//int i,j, m=5 ,k=1;
////char input , alphabet='A';
//printf("Enter an uppercase character you want to print in the last row:");
////scanf("%d",&inpu);
//for(i=1;i<=m-k+1;++i)
//{
//	for(j=1;j<=i;++j)
//	{
//		printf("%d",k);
//	}
//	++k;
//	printf("\n");
//}

for(row=1;row<=n;row++)
{
	for(col=1;col<=row;col++)
	{
		printf("%d",row);
	}
	printf("\n");
	
}
printf("\n");

int k =0;

   for (row = 1; row <= n; ++row,k=0) {
      for (col= 1; col <= n - row; ++col) {
         printf("  ");
      }
      while (k != 2 * row - 1) {
         printf("* ");
		 ++k;
      }
      printf("\n");
   }
   
   
printf("\n");
int rows, i, j, number = 1;
   for (i = 1; i <=n-1; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }

printf("\n");
//int k =0;

   for (row = 1; row <= n; ++row,k=0) {
      for (col= 1; col <= n -row; ++col) {
         printf("* ");
      }
      while (k != 2 * row - 1) {
         printf("   ");
		 ++k;
      }
      printf("\n");
   }

}
