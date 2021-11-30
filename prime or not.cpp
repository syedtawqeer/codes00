#include <stdio.h>
 int checkPrime(int num);    //Function Definition

int main() 
{
    int num;        //Declare a number
    printf("Enter the number\n");
    scanf("%d",&num);    //Initialize the num

    checkPrime(num);     //Function Call
    
    
}
int checkPrime(int num)    //Function Definition
{
     int count=0;
    for(int i=2;i<=num/2;i++)    //Loop to check for factors
    {
        if(num%i==0)
        {
            count++;           //If factors found then increment the count
            break;
        }
    }
    if(count!=0)             //Check whether prime or not
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
}
