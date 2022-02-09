#include "stdio.h"
void main()
{
	int n,i,count;
	printf("Enter number check prime or not");
	scanf("%d",&n);
//	if(i<=n/2)
//		goto prime;
//	
	i=2;
	count;	
	prime:
		if(n%i==0)
		{
			count=0;
//			i++;
		}
	i++;
	if(i<n)	goto prime;
		
    
	if(count==0)
	{
		printf("%d is a prime no.",n);
	}
	else 
	{
		printf("%d is not a prime no.",n);
	}

//
//	for(i=2;i<=n/2;i++)
//	{
//		if(n%i==0)
//		{
//			count=1;
//			break;
//		}
//	}
//	if(count==0)
//	{
//			printf("%d is a prime no.",n);
//	}
//	else
//		printf("%d is not a prime no.",n);
//		
	getch();
}
