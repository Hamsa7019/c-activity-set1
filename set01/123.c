#include<stdio.h>
void input_two_strings(char *string1,char *string2)
{
  printf("enter the first string\n");
  scanf("%s",string1);
  printf("enter the second string\n");
  scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
    int i=0;
    for(i=0;string1[i]==string2[i] && string1[i]!='\0'&& string2[i]!='\0';i++);
    if(string1[i]<string2[i])
    {
        return 1;
    }
    else if(string1[i]>string2[i])
    {
        return 2;
    } 
    else{
        return 0;
    }  
}
void output(char *string1,char *string2,int result)
{
    if(result==1)
    {
        printf("%s is greater",string1);
    }
    else if(result==2)
    {
        printf("%s is greater",string2);
    }
    else {
        printf("both are equal");
    }

}