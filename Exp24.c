#include <stdio.h>

int main()
{
    FILE *in,*out;
    char f1[50],f2[50],c,next;

    printf("Input file: ");
    scanf("%s",f1);

    printf("Output file: ");
    scanf("%s",f2);

    in=fopen(f1,"r");
    out=fopen(f2,"w");

    if(in==NULL || out==NULL)
        return 0;

    while((c=fgetc(in))!=EOF)
    {
        if(c=='/')
        {
            next=fgetc(in);

            if(next=='/')
            {
                while((c=fgetc(in))!='\n' && c!=EOF);
            }
            else if(next=='*')
            {
                while((c=fgetc(in))!=EOF)
                {
                    if(c=='*')
                    {
                        c=fgetc(in);
                        if(c=='/')
                            break;
                    }
                }
            }
            else
            {
                fputc(c,out);
                fputc(next,out);
            }
        }
        else
            fputc(c,out);
    }

    fclose(in);
    fclose(out);

    return 0;
}