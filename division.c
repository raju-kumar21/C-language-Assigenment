#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter two number For division\n");
	scanf("%d%d",&x,&y);
	printf("first number x=%d\n",x);
	printf("Second number y=%d\n",y);
	z=x/y;
	if(z==0)
	{
		printf("plee enter y less than x ");
	}
	else{
			printf("division=%d",z);
	}
}
