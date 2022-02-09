#include "stdio.h"

void main()
{
	
	
	
	
	char str[26];
	int i,vol,con,dig;
	printf("Enter your name:");
	gets(str);
	
	
	
	
	
	
	
	for(i=0,vol=0,dig=0,con=0;str[i]!='\0';i++)\
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vol++;
		}
		else if( str[i]>='a'&&str[i]<='z')
		{
			con++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			dig++;
		}
	}
	
	printf(" Total Vovels are =%d",vol);
	printf(" Total cons are =%d",con);
	printf(" Total digit are=%d",dig);
    
    printf(5+"vovelsholo");
}
