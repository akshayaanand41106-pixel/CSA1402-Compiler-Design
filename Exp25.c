#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i=0;

    printf("Enter sentence: ");
    fgets(s,200,stdin);

    while(s[i]!='\0')
    {
        if(isupper(s[i]))
        {
            while(isalpha(s[i]))
                putchar(s[i++]);

            printf("\n");
        }
        else
            i++;
    }

    return 0;
}