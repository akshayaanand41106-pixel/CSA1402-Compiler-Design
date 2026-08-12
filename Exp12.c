#include <stdio.h>
#include <string.h>

char input[100];
int pos=0;

void E();
void T();
void F();

void E()
{
    T();

    while(input[pos]=='+')
    {
        pos++;
        T();
    }
}

void T()
{
    F();

    while(input[pos]=='*')
    {
        pos++;
        F();
    }
}

void F()
{
    if(input[pos]=='i' && input[pos+1]=='d')
    {
        pos=pos+2;
    }
    else if(input[pos]=='(')
    {
        pos++;
        E();

        if(input[pos]==')')
            pos++;
    }
}

int main()
{
    printf("Enter expression using id, +, *, (, ): ");
    scanf("%s",input);

    E();

    if(input[pos]=='\0')
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}