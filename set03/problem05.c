//Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

#include<stdio.h>
#include<stdio.h>
int input_array_size()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("enter the array\n");
        scanf("%d",a[i]);
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    a[i] = 0; 
                    break;
                }
            }
        }
        else
        {
            a[i] = 0; 
        }
    }
}
void output(int n,int a[n])
{
      printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
int main()
 {
    int n;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);
    return 0;
}