//Write a program find whether a number is a composite number

#include<stdio.h>
#include<math.h>
int input_number()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    return n;
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
    
   }
   return 0;
   
}
void output(int n, int result)
{

    if(result==1)
    {
        printf("the number %d is a composite number ",n);
    }
    else
    {
        printf("the number %d is not a composite number",n);
    }
}
int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}
