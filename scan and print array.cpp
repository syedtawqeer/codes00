// scan and print array
#include<stdio.h>
main()
{
	int n, a[100] ,i ,j   ;
	printf("enter the size of the array = ") ;
	scanf("%d",&n) ;
	printf("enter the the values of the array");
	for (i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<i;j++)
		printf("%d\n",a[j]);
	
}
