#include <stdio.h>
#include <string.h>

char input[100];
int pos=0;

int match(char *s)
{
    int len=strlen(s);

    if(strncmp(&input[pos],s,len)==0)
    {
        pos+=len;
        return 1;
    }

    return 0;
}

int main()
{
    printf("Enter expression: ");
    scanf("%s",input);

    if(match("id"))
    {
        while(input[pos]=='+' || input[pos]=='*')
        {
            pos++;

            if(!match("id"))
            {
                printf("Rejected\n");
                return 0;
            }
        }

        if(input[pos]=='\0')
            printf("Accepted\n");
        else
            printf("Rejected\n");
    }
    else
        printf("Rejected\n");

    return 0;
}