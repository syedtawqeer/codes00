//fabinochi series   1  1  2  3  5

#include<stdio.h>
main()
{ int a=0,b=1,c,i,n;
printf("enter value");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf("%d\n",a);
	
	c=a+b;
	
	a=b;
	b=c;
    }
}
