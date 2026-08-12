#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int n;

    printf("Enter expression: ");
    scanf("%s",s);

    n=strlen(s);

    printf("TRAILING: ");

    if(s[n-1]==')')
        printf(")");

    else if(n>=2 && s[n-2]=='i' && s[n-1]=='d')
        printf("id");

    printf("\n");

    return 0;
}