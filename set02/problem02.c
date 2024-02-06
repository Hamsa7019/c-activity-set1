//Write a program to find if a triangle is scalene.
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

#include<stdio.h>
int input_side()
{
  int side;
  printf("enter the side");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c)
{
  if(a !=b && b!=c && c!=a)
  {
    return 1;
  }
  else{
    return 0;
  }
}
 void output(int a, int b, int c, int isscalene)
 {
   if(isscalene)
   {
    printf("the triangle with sides %d,%d and %d is scalene triangle",a,b,c);
   }
   else{
    printf("the triangle with sides %d,%d,%d is not a scalene triange\n",a,b,c);
   }
 }

int main(){
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
    
}