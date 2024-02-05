#include<stdio.h>
int input_array_size()
{
    int n;
    printf("enter the value\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i=0;
     printf("enter the array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
    sum=sum+a[i];
    }
        return sum;
}
void output(int n, int a[n],int sum)
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
    int n,sum=0;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}