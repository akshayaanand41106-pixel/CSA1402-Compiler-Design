#include <stdio.h>

int main()
{
    FILE *fp;
    char file[50],c;
    int line=1;

    printf("Enter C file: ");
    scanf("%s",file);

    fp=fopen(file,"r");

    if(fp==NULL)
        return 0;

    printf("%d ",line);

    while((c=fgetc(fp))!=EOF)
    {
        putchar(c);

        if(c=='\n')
            printf("%d ",++line);
    }

    fclose(fp);

    return 0;
}