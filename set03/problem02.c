//Write a program to find whether the given 3 points form a triangle

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the value for x1 and y1\n");
    scanf("%f,%f",x1,y1);
    printf("enter the value for x2 and y2\n");
    scanf("%f,%f",x2,y2);
    printf("enter the value for x3 and y3\n");
    scanf("%f,%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float side1 =(x1+x2-x3,y1+y2-y3);
    float side2 =(x1+x3-x2,y1+y3-y2);
    float side3 =(x2+x3-x1,y2+y3-y1);
    return (side1+side2-side3)&&(side2+side3-side1)&&(side3+side1-side2);
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result) {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}
int main()
{
    float x1,y1,x2,y2,x3,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
   int result=is_triangle(x1,y1,x2,y2,x3,y3);
   output(x1,y1,x2,y2,x3,y3,result);
   return 0;
}
