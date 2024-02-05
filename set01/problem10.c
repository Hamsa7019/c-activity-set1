#include<stdio.h>
#include<math.h>


void input_two_strings(char *string1, char *string2)
{
    printf("enter the first string\n");
    scanf("%s",string1);
    printf("enter the second string\n");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    int a=0;
    for(int i=0;string1[i]!='\0'&& string2[i]!='\0';i++)
    {

        if(string1[i]<string2[i])
        {
            a++;
            return 0;
        }
        else if(string1[i]>string2[i])
        {
            a++;
            return 1;
        }
    }
    if(a==0)
    {
        return 2;
    }
}
void output(char *string1, char *string2, int result)
{
    if(result==0)
    {
        printf("%s is greater than %s",string2,string1);
    }
    else if(result==1)
    {
        printf("%s is greater than %s",string1,string2);
    }
    else{
        printf("both are equal");
    }
}
int main()
{
    int result;
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}