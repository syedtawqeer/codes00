//memory address 
#include<stdio.h>
main()
{
	int x=20;
	int*p;
	p=&x;
	printf("memory address of %d  is  %x", *p+1,&x);
}
