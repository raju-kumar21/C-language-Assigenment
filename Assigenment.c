#include"stdio.h"

void main()
{
	int h,j,ch;
   // for factorial 
	int i,n,fact;
//for Power of X , Y
	int a=1,x,y;
//for sum of digit
int d,s=0,digit	;
//for reverse
int c=0,dig;
//for palindrome
int g,f=0,num;	
	
	printf("Enter your Choies\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		
			printf("Enter any number\n");
			for(i=1,fact=1,scanf("%d",&n);i<=n;fact=fact*i,i++);
			{
				printf("Factorial=%d\n",fact);
			}
		break;
		case 2:
			printf("Enter Value of X and Y\n");
			scanf("%d%d",&x,&y);
			for(i=1;i<=y;i++)
			{
				a=a*x;
			}
			printf("Power of X , Y = %d",a);
			break;
		case 3:
			printf("Enter Digit\n");
			scanf("%d",&digit);
			 for(i=1;digit>0;i++)
			 {
				s=s+digit%10;
			 	digit=digit/10;
			 }
			 printf("Sum of Digit =%d",s);
			 break;
		case 4:
			printf("Enter Digit for reversing\n");
			scanf("%d",&dig);
			for(i=1;dig>0;i++)
			{
			
				c=c*10+dig%10;
				dig=dig/10;
			}
			printf("Reverse of given digit =%d,%d\n",c);
			break;
		case 5:
			printf("Enter any Number \n");
			scanf("%d",&num);
			for(i=num;i>0;)
			{
				g=i%10;
				f=f*10+g;
				i=i/10;
			}
			if(num==f)
			{
				printf("Given number is a palindrome number");
			}
			else
			{
				printf("Given number is  Not a palindrome number");
			}
			break;
	}
	
	
}
