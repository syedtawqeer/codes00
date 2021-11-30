//copy paste a string and reverse

#include<stdio.h>
main()
{char a[100],c[100];
	int i  ,l=0     ,j=0 ;
	printf(" enter the string ");
	gets(a);
	
	for(i=0; a[i] !='\0' ;i++) 
	{
		l++;
	}
	printf("the lenth of the string = %d\n",l);

for(i=l;i>=0;i--)
{
     printf("%c",a[i]);
}
	
	
}
