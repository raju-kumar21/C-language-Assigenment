#include <stdio.h>
#include <string.h>

void main()
{
	char str[26];
	int l=0,i,vol,con,dig;
	printf("Enter your name:");
	gets(str);
	int length = strlen(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		l++;
	}
	printf("in lower case Length of %s =%d\n",str,l);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
//		l++;
	}
	
	printf("in UPPER CASE Length of %s =%d\n",str,l);
    
   int countv=0;
   int countc=0;
	
	printf(" Vowel Letters Are :");
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		printf("%c ",str[i]);
		}
    }
    printf("\n");
    
    
	printf("consonant Letters Are :");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			{
				countv++;
			}
			else
			{
			   
				printf("%c ",str[i]);
			}
    }




for(i=0,vol=0,dig=0,con=0;str[i]!='\0';i++)
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
    
	
getch();	
	
	
}
