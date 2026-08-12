#include <stdio.h>

int main()
{
    char *rules[] =
    {
        "S -> (L) | a",
        "L -> S L'",
        "L' -> , S L' | e"
    };

    printf("Grammar after removing left recursion:\n");

    for(int i=0;i<3;i++)
        printf("%s\n",rules[i]);

    return 0;
}