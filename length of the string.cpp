#include<stdio.h>
main()
{char a[];
	int i  ,l=0      ;
	printf(" enter the string ");
	gets(a);
	
	for(i=0; a[i] !='\0' ;i++) 
	{
		l++;
	}
	printf("the lenth of the string = %d",l);
	
}
