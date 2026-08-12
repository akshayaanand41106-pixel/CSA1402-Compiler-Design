#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[100];
    int i=0;

    printf("Enter expression: ");
    fgets(s,100,stdin);

    while(s[i])
    {
        if(isspace(s[i]))
            i++;
        else if(isalpha(s[i]) || s[i]=='_')
        {
            printf("Identifier: ");
            while(isalnum(s[i]) || s[i]=='_')
                printf("%c",s[i++]);
            printf("\n");
        }
        else if(isdigit(s[i]))
        {
            printf("Constant: ");
            while(isdigit(s[i]))
                printf("%c",s[i++]);
            printf("\n");
        }
        else if(strchr("+-*/=%",s[i]))
            printf("Operator: %c\n",s[i++]);
        else
            i++;
    }

    return 0;
}