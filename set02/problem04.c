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
int sum_composite_numbers(int n, int a[n])
{
    int i,c,sum=0;
    for(i=0;i<n;i++){
        for(int j=2;j<=sqrt(a[i]);j++){
        if(a[i]%j==0){
                sum+=a[i];
            
            }
        }
    }
    return sum;
}
void output(int sum)
{
    printf("the sum is %d",sum);
}
int main()
{
    int n,sum=0;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}