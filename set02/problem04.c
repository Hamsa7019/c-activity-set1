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
        return 2;
    }
   }
}
int sum_composite_numbers(int n, int a[n])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;

}
void output(int sum,int n, int a[n])
{
     int i;
    for(int i=0;i<=n;i++)
    {
        if(i<n)
        {
            printf("+%d",a[i]);
        }
        else
        {
            printf("is %d",sum);
        }
    }
}
int main()
{
    int n,sum=0,result;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    is_composite(n);
    sum=sum_composite_numbers(n,a);
    output(sum,n,a);
    return 0;
}