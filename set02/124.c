#include<stdio.h>
#include<math.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
void input_n_triangles(int n, Triangle t[n]);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int input_n()
{
    int n;
    printf("enter the value for n\n");
    scanf("%d",&n);
    return n;
}

void input_n_triangles(int n, Triangle t[n])
{ 
    for(int i=0;i<n;i++)
    {
    printf("enter the value for base and altitude:\n");
    scanf("%f %f",&t[i].base,&t[i].altitude);
    }
}
void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
    t[i].area = 0.5*(t[i].base*t[i].altitude);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest_triangle=t[0];

  for(int i=1;i<n;i++)
  {

    if(t[i].area<smallest_triangle.area)
    {
        smallest_triangle=t[i];
    }

  }
  return smallest_triangle;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("area of the triangles are:\n");
    for(int i=0;i<n;i++)
    {
         printf("Triangle %d: Base=%.2f, Altitude=%.2f, Area=%.2f\n", i + 1, t[i].base, t[i].altitude, t[i].area);
    }
    printf("The smallest triangle is: Base=%.2f, Altitude=%.2f, Area=%.2f\n", smallest.base, smallest.altitude, smallest.area);
}
  int main()
  {
    int n = input_n();
    Triangle t[n];
    input_n_triangles(n, t);
    find_n_areas(n, t);
    Triangle smallest = find_smallest_triangle(n, t);
    output(n, t, smallest);
    return 0;
  }  


