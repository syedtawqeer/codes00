#include<stdio.h>

main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year%400==0)
        {
            printf("%d is a leap year.",year);
        }

    // If year is not divisible by 400
    // but divisible by 100
        else if(year%100==0)
        {
            printf("%d is not a leap year.", year);
        }

    // If year is not divisible by 100
    // but divisible by 4
        else if(year%4==0)
        {
            printf("%d is a leap year.", year);
        }

    // All remaining years are not leap years
        else
        {
            printf("%d is not a leap year.", year);
        }
}
