#include <stdio.h>
void main()
{
	
	int a[10];
	int i,n ,sum=0 , max=0,min=0;
	printf(" how many elements enter an array");
	scanf("%d",&n);
	printf("Enter an array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];//sum of array element
	}
	printf("Sum of Array Elements =%d \n",sum);
	printf("Arry elements Are:\n");
	for(i=0;i<n;i++)
	{ 
	//1 
		if(max<a[i])
		{
		    max=a[i];
//			continue;	
		}
		else if( min>a[i])
		{
			min=a[i];
		}
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("max array element =%d\n",max);
	printf("min array element =%d",min);
//	if(max>a[i]&&min<a[i])
//	{
//		printf("second =%d",a[i]);
//	}
	
}

