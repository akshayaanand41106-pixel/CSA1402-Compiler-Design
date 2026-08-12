#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char file[50],c;
    int ch=0,word=0,line=0,inword=0;

    printf("Enter file name: ");
    scanf("%s",file);

    fp=fopen(file,"r");

    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }

    while((c=fgetc(fp))!=EOF)
    {
        ch++;

        if(c=='\n')
            line++;

        if(isspace(c))
            inword=0;
        else if(!inword)
        {
            word++;
            inword=1;
        }
    }

    fclose(fp);

    printf("Characters = %d\n",ch);
    printf("Words = %d\n",word);
    printf("Lines = %d\n",line);

    return 0;
}