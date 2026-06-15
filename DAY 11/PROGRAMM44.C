

#include<stdio.h>
int factorial (int n)
{
    int fact = 1;

    for(int i=2 ; i <= n ; i++) 
    {
    
    fact = fact * i ;
    }
    return fact ;

}

int main()
{
  
int n ;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int fact = factorial(n);//function calling 

    printf("The factorial of a given number is %d",fact);

    return 0;

}