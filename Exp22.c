#include <stdio.h>

int main()
{
    FILE *fp;
    char file[50],c;
    int tag=0;

    printf("Enter HTML file: ");
    scanf("%s",file);

    fp=fopen(file,"r");

    if(fp==NULL)
        return 0;

    while((c=fgetc(fp))!=EOF)
    {
        if(c=='<')
            tag=1;

        if(tag)
            putchar(c);

        if(c=='>')
        {
            printf("\n");
            tag=0;
        }
    }

    fclose(fp);

    return 0;
}