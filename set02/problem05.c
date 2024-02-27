// Write a program to find GCD _(HCF)_ of two numbers.

#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("enter the value:\n");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b)
{
    int gcd; 
  while(1)
  {
    if(a>b)
    {
      a=a-b; 
    }
    else{
      b=b-a; 
    }
    if(a==b)
    {
      gcd=a;
      return gcd; 
  break;
    }
  
  }

 
}
void output(int a, int b, int gcd)
{
    printf("the gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
    int n,a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;

}