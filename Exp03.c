#include <stdio.h>

int main()
{
    char ch;

    printf("Enter text:\n");

    while((ch = getchar()) != EOF)
    {
        if(ch == ' ' || ch == '\t' || ch == '\n')
            continue;

        if(ch == '#')
        {
            while((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }

        printf("%c", ch);
    }

    return 0;
}