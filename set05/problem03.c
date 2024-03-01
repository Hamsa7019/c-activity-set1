#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
 struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input()
{
    
}
float find_weight(Camel c); 
void find_weight(Camel *c); //passing address variable
void output(Camel c);