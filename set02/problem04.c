//Write a program to find Sum of composite number in an array of different numbers entered by the user.
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

#include<stdio.h>
#include<math.h>
int input_array_size()
{
    int n;
    printf("enter the array size:\n");
    scanf("%d",&n);
    return 0;
}
void input_array(int n, int a[n])
{
    printf("enter the array values:\n");
    for(int i=2;i<sqrt(n);i++)
    {
      scanf("%d",a[i]);  
    }
}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=2;i<=sqrt(n);i++)
   {
    if(n%i==0)
    {
        return 1;
    }
    sum=sum+a[i];
   }
   return sum;
}
void output(int sum)
{
    printf("the sum is %d",sum);
}