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
    for(int i=0;i<n;i++)
    {
        printf("enter the array values:\n");
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
    int i,sum;
    for(i=0;i<n;i++){
        for(int fact=2;fact<=sqrt(a[i]);fact++)
        {
            if(a[i]%fact==0)
            {
              sum=sum+a[i];  
              break;
            }
        }
        
    }
    return sum;
}
void output (int sum)
{
    
 printf("the sum is %d",sum);
}
int main()
{
    int sum,n;
    n=input_array_size();
    int a[n];
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}