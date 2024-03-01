//  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

//`weight = pi * stomach_radius^3 * sqrt(height * length)`
#include<stdio.h>
#include<math.h>
#define PI 3.14159265359
void input_camel_details(float *radius, float *height, float *length)
{
    printf("enter the value of radius,height and length:\n");
    scanf("%f, %f,%f",radius,height,length);
}
float find_weight(float radius, float height, float length)
{
    float pi_times_radius_cubed = PI * pow(radius, 3);
    float sqrt_height_times_length = sqrt(height * length);
    float weight = pi_times_radius_cubed * sqrt_height_times_length;
    return weight;
}
void output(float radius,float height,float length,float weight)
{
    printf("The weight of the camel with stomach radius: %.2f, heigth: %.2f, length: %.2f is %.4f\n",radius,height,length,weight);
}
int main()
{
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius, height, length);
    output(radius, height, length,weight);
    return 0;

}
