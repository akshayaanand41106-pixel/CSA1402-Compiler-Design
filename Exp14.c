#include <stdio.h>

int main()
{
    char a,b,op;

    printf("Enter expression like a+b: ");
    scanf("%c %c %c",&a,&op,&b);

    printf("t1 = %c %c %c\n",a,op,b);

    return 0;
}