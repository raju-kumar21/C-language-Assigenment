#include "stdio.h"
void main()
{
	float a,b,c;
	int ch;
	do{
	
	printf("\n Enter your \2 \3 \4 \5 choise are:\n");
	printf("1 for Addition: \2 for Substraction:");
	printf("\nEnter your choise");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
			 printf("Enter any two number:");
			 scanf("%f%f",&a,&b);
			 c=a+b;
			 printf("Addition: %f ",c)	;
			 break;
			}
		case 2:
			{
				
			}
		case 3:
			{
				
			}
		case 4:
			{
				
			}
	}
 }while(ch!=5);
}
