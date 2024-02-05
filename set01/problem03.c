//3. Write a C program to add two numbers.(pass by value)
#include<stdio.h>
int input()
{
    int n;
    printf("enter the value\n");
    scanf("%d",&n);
    return n;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}   
    
 
    
