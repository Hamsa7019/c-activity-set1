// Write a C program to find the sum of 2 complex numbers

#include<stdio.h>
struct _complex {
   float real;
   float imaginary;
}; 
typedef struct _complex Complex;

Complex input_complex()
{
    Complex c;
    printf("enter the real part\n");
    scanf("%f",&c.real);
    printf("enter the imaginary part\n");
    scanf("%f",&c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum; 
}
void output(Complex a, Complex b, Complex sum)
{
    printf(" the complex a:%f+%fi",a.real,a.imaginary);
    printf("the complex of b:%f+%fi",b.real,b.imaginary);
    printf("the sum is %f+%fi",sum);
}
int main()
{
    Complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}