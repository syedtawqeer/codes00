#include<stdio.h>
main()
{
int a[5]={1,2,5,6,9};
int i ,s ,flag=0   ;
printf("element u want to search : ");
scanf("%d",&s)      ;
	for(i=0;i<=5;i++)
	{
		if(s==a[i])
	{
		
		flag=1;
		printf("element found \t%d \n  at a[%d]",a[i], i );
	}
} 
if(flag==0)
		{
			printf("element  not found  ");
			
		}
	
}
