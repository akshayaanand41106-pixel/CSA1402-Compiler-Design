#include <stdio.h>

int main()
{
    char *rules[] =
    {
        "S -> iEtS S' | a",
        "S' -> eS | e",
        "E -> b"
    };

    printf("Grammar after left factoring:\n");

    for(int i=0;i<3;i++)
        printf("%s\n",rules[i]);

    return 0;
}