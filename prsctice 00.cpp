#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x, y, z ,valid=0 ;    //sides of the triangle
    int max, flag=0;
    printf("Enter the first side: ");
    scanf("%d", &x);
    printf("Enter the second side: ");
    scanf("%d", &y);
    printf("Enter the third side: ");
    scanf("%d", &z);


    max = x;

    if(max<y)
        max=y;

    if(max<z)
        max=z;

    //now check for validation rules
    //if largest side is lower than the sum of two remaining sides
    if(max == x && x < (y+z))
        valid = 1;

    if(max == y && y < (x+z))
        valid = 1;

    if(max == z && z < (x+y))
        valid = 1;

if (valid==1)
    printf("Triangle is valid");
else
    printf("Triangle is not valid");
}
