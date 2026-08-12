#include <stdio.h>

int main()
{
    char followS[5]={'$'};
    char followA[5]={'a','b'};
    char followB[5]={'a','b'};

    printf("FOLLOW(S) = { %c }\n",followS[0]);

    printf("FOLLOW(A) = { ");
    for(int i=0;i<2;i++)
        printf("%c ",followA[i]);
    printf("}\n");

    printf("FOLLOW(B) = { ");
    for(int i=0;i<2;i++)
        printf("%c ",followB[i]);
    printf("}\n");

    return 0;
}