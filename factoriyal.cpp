//factorial

#include<stdio.h>
main()
{
	int n ,i , fact ;
	printf("enter the no " );
	scanf("%d",&n)  ;
	for(i=1;i<=n;i++)

	{
		fact=fact*i;
	}

	printf("%d\n",fact);

}
