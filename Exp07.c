#include <stdio.h>

int main()
{
    char firstS[10];
    int n=0;

    /* A and B produce epsilon */
    firstS[n++]='a';
    firstS[n++]='b';

    printf("FIRST(S) = { ");

    for(int i=0;i<n;i++)
        printf("%c ",firstS[i]);

    printf("}\n");

    printf("FIRST(A) = { e }\n");
    printf("FIRST(B) = { e }\n");

    return 0;
}