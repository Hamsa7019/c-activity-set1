// Write a program to reverse a string.
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
    printf("enter the string a:\n");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
     int len = strlen(str); 
    for (int i = 0, j = len - 1; i <= j; i++, j--)
     { 
        char c = str[i]; 
        str[i] = str[j]; 
        str[j] = c; 
    } 
     
}
void output(char *a, char *reverse_a)
{
   printf("original string: %s",a);
   printf("Reveresed string: %s",reverse_a); 
}
int main()
{
    char str[100], rev_str[100];
    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);
    return 0;
}