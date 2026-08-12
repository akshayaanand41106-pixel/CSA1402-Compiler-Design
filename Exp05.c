#include <stdio.h>

int main()
{
    char s[200];
    int i, spaces = 0, newlines = 0;

    printf("Enter text: ");
    fgets(s, 200, stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            spaces++;

        if(s[i] == '\n')
            newlines++;
    }

    printf("Spaces = %d\n", spaces);
    printf("New lines = %d\n", newlines);

    return 0;
}