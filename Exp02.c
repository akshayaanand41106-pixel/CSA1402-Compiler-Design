#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];

    printf("Enter line: ");
    fgets(s,200,stdin);

    if(strstr(s,"//")==s ||
       (strstr(s,"/*") && strstr(s,"*/")))
        printf("Comment\n");
    else
        printf("Not a Comment\n");

    return 0;
}