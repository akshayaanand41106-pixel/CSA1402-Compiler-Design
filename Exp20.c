#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char file[50],c;

    printf("Enter C file: ");
    scanf("%s",file);

    fp=fopen(file,"r");

    if(fp==NULL)
        return 0;

    while((c=fgetc(fp))!=EOF)
    {
        if(isdigit(c))
        {
            printf("%c",c);

            while((c=fgetc(fp))!=EOF && isdigit(c))
                printf("%c",c);

            printf("\n");
        }
    }

    fclose(fp);

    return 0;
}