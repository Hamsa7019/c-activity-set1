// Write a program to find the area of a triangle

#include<stdio.h>
#include<math.h>
struct triangle
{
    float base;
    float height;
};
typedef struct triangle tria;
void input(float *base, float *height)
{
    printf("enter the value for base\n");
    scanf("%f",base);
    printf("enter the value for height\n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area= 0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("thr area of %f and %f is %f",base,height,area);
}
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
