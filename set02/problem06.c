#include<stdio.h>
void input_string(char *a)
{
    printf("Enter the string a:\n");
    scanf("%s", a);
}

void str_reverse(char *str, char *reverse_a)
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++);
    for (j = 0; i > 0; i--, j++)
    {
        reverse_a[j] = str[i - 1];
    }
    reverse_a[j] = '\0';
}

void output(char *a, char *reverse_a)
{
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main()
{
    char str[100], rev_str[100];
    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);
    return 0;
}
