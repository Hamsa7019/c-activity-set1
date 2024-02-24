//Write a program to find Sum of composite number in an array of different numbers entered by the user.


#include<stdio.h>
#include<math.h>
int input_array_size()
{
    int n;
    printf("enter the array size:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("enter the array values:\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }
}
int is_composite(int n)
{
  int i;
   for(i=2;i<=sqrt(n);i++)
   {
    if(n%i==0)

    {
        return 1;
    }
    else{
        return 0;
    }
   }
}
int sum_composite_numbers(int n, int a[n])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(is_composite(a[i]))
        sum=sum+a[i];
    }
    return sum;
}
void output(int sum, int n, int a[n]) 
{
    printf("Composite numbers:\n ");
    for(int i = 0;i < n;i++) 
    {
        if (is_composite(a[i])) 
        {
            printf("%d+", a[i]);
        }
    }
    printf("Sum of composite numbers: %d\n", sum);
}
int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum,n,a);
    return 0;
}