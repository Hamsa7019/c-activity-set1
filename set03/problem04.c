//Write a program to find nth number in fibonacci sequence.
int input();
int find_fibo(int n);
void output(int n, int fibo);

#include<stdio.h>
#include<math.h>
int input()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{   
    int a[n];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n];
    
}
void output(int n,int fibo)
{
    printf("The fibo(%d) is: %d\n", n, fibo);
}
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}