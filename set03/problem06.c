//Write a program to find the index of a substring of a string

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
#include<stdio.h>
void input_string(char* a, char* b)
{
    printf("enter the string for a:\n");
    scanf("%s",a);
    printf("enter the value for b:\n");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{

}
void output(char *string, char *substring, int index)
{

}
int main()
{
   char a[100], b[100];
    input_string(a, b);
    int index = sub_str_index(a, b);
    output(a, b, index);
    return 0; 
}