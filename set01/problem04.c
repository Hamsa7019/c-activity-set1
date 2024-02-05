//Write a C program to add two numbers using **pass by reference**
#include<stdio.h>
void input(int *a,int *b)
{
    printf("enter the value for a and b\n");
    scanf("%d",a);
    scanf("%d",b);
}
void add(int a,int b,int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}   
    
 
    

