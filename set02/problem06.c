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
    int length=strlen(str);
    int i,j;
    for(i=length-1;i>=0;i--){
        rev_str[j]=str[i];
        j++;
    }
    rev_str='\0';
     
}
void output(char *a, char *reverse_a)
{
   printf("original string: %s",a);
   printf("Reveresed string: %s",reverse_a); 
}
int main()
{
    
    char str[100],a,rev_str;
    char rev_a;
    input_string(&a);
    str_reverse(&str,&rev_str);
    output(&a,&rev_a);
    return 0;
}