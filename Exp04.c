#include <stdio.h>

int main()
{
    char ch;

    printf("Enter operator: ");
    scanf(" %c", &ch);

    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        printf("Valid Operator");
    else
        printf("Invalid Operator");

    return 0;
}