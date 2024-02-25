//Write a program to check if the given number is prime
int input_number();
int is_prime(int n);
void output(int n, int result);
#include<stdio.h>
#include<math.h>
int input_number()
{
    int n;
    printf("enter he number\n");
    scanf("%d",&n);
    return n;
}
int is_prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;   
    }
    }
    return 1;
}
void output(int n,int result)
{
    if(result==0)
    {
        printf(" %d  is not prime number\n",n);
    }
    else
    {
    
        printf("%d is prime number\n",n);
    }
}
