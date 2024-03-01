//Write a program to find the distance between two points.
#include<stdio.h>
#include<math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input(){
    Point p ;
    printf("enter the value for x-coordinate:\n");
    scanf("%f",&p.x);
    printf("enter the y-coordinate:\n");
    scanf("%f",&p.y);
    return p;
}
void dist(Point a, Point b, float *res)
{
    *res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}
void output(Point a, Point b, float res)
{
 printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", a.x, a.y, b.x, b.y, res);
}
int main()
{
     Point x, y;
    float distance;
    x = input();
    y = input();
    dist(x,y, &distance);
    output(x, y, distance);
    return 0;
}
