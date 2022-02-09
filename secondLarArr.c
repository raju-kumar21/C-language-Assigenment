#include <stdio.h>
void main()
{
	
	int a[10];
	int i,n ;
	int sum=0;
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
	int min=a[0],max=a[0] , s=a[0];
	for(i=0;i<n;i++)
	{ 
	//1 
		if(max<a[i])
		{
			s=max;
		    max=a[i];
//			continue;	
		}
		else if( min>a[i])
		{
			min=a[i];
		}
		else if(a[i]>min && a[i]<max)
		{
			s=a[i];
		}
//		s=a[i];
		printf("a[%d] = %d\n",i,a[i]);
		
	}
	printf("max array element =%d\n",max);
    printf("min array element =%d\n",min);
//	printf("second =%d",s);
	printf("second Max array element =%d\n",s);
	printf(" Reversr of array element\n");
   for(i=n-1; i>=0; i--)
   {
   	printf("a[%d] = %d\n",i,a[i]);
   }
}

