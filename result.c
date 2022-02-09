#include <stdio.h>

int main()
{
					int e,h,p,c,m,result,total;
					printf("Enter Subject marks\n\n");
					printf("Enter Marks of English:");
					scanf("%d",&e);
					printf("Enter Marks of Hindi:");
					scanf("%d",&h);
					printf("Enter Marks of Physics:");
					scanf("%d",&p);
					printf("Enter Marks of chemestry:");
					scanf("%d",&c);	
					printf("Enter %Marks of math:");
					scanf("%d",&m);
					total=e+h+p+c+m;
					result=(total*100)/500;
					printf("\n\n");
					if(-1<e&&e<=100&&-1<h&&h<=100&&-1<p&&p<=100&&-1<c&&c<=100&&-1<m&&m<=100)
					{
						(e<30&&h<30&&p<30&&c<30&&m<30 ? printf("Fail in all Subjects\n\n"):(e<30&&h<30&&p<30&&c<30||e<30&&h<30&&p<30&&m<30||e<30&&h<30&&c<30&&m<30||e<30&&p<30&&c<30&&m<30||h<30&&p<30&&c<30&&m<30 ? printf("Fail in Four Subjects \n\n"):(e<30&&h<30&&p<30||e<30&&h<30&&c<30||e<30&&h<30&&m<30||e<30&&p<30&&c<30||e<30&&p<30&&m<30||e<30&&c<30&&m<30||h<30&&p<30&&m<30||h<30&&p<30&&c<30||h<30&&c<30&&m<30||p<30&&c<30&&m<30 ? printf("Fail in three Subject\n\n"):(e<30&&h<30||e<30&&p<30||e<30&&c<30||e<30&&m<30||h<30&&p<30||h<30&&c<30||h<30&&m<30||p<30&&c<30||p<30&&m<30||c<30&&m<30 ? printf("Fail in Two Subjects\n\n"):(e<30||h<30||p<30||c<30||m<30 ? printf("Fail in One subject \n\n"):printf("\n\n"))))));
								
								(e<30 ? printf("Fail in English\n"):printf(""));
								(h<30 ? printf("Fail in Hindi\n"):printf(""));
								(p<30 ? printf("Fail in Physics\n"):printf(""));
								(c<30 ? printf("Fail in Chemistry\n"):printf(""));
								(m<30 ? printf("Fail in Mathematics\n\n"):printf("\n"));
						if(e>=30&&h>=30&&p>=30&&c>=30&&m>=30)
							{							
								if(total>=300)
									{
									printf("English=%d\nHindi=%d\nphysics=%d\nChemistry=%d\nMathematics=%d\n\n",e,h,p,c,m);
									printf("Result First Division\n\n");
									printf("Percentage=%d\n\n",result);
									printf("Total Marks=%d",total);
									 } 
							    else if(total>=250)
									{
									printf("English=%d\nHindi=%d\nphysics=%d\nChemistry=%d\nMathematics=%d\n\n",e,h,p,c,m);
									printf("Result Second Division\n\n");
									printf("Percentage=%d\n\n",result);
									printf("Total Marks=%d",total);
								 	} 
								else if(total>=225)
									{
									printf("English=%d\nHindi=%d\nphysics=%d\nChemistry=%d\nMathematics=%d\n\n",e,h,p,c,m);
									printf("Result third Division\n\n");
									printf("Percentage=%d\n\n",result);
									printf("Total Marks=%d",total);
									}
								else 
									{
										printf("English=%d\nHindi=%d\nphysics=%d\nChemistry=%d\nMathematics=%d\n\n",e,h,p,c,m);
										printf("Result Fail\n\n");
										printf("Percentage=%d\n\n",result);
										printf("Total marks=%d",total);
									}
							}
							else
							{
								printf("English=%d\nHindi=%d\nphysics=%d\nChemistry=%d\nMathematics=%d\n\n",e,h,p,c,m);
								printf("Result Fail\n\n");
								printf("Percentage=%d\n\n",result);
								printf("Total marks=%d",total);
							}
					}
					else
					{
						printf("English=%d\nHindi=%d\nphysics=%d\nChemistry=%d\nMathematics=%d\n\n",e,h,p,c,m);
						printf("Enter subject marks are Invalid || -1<marks>=100");
						
					}
    return 0;
	
}
