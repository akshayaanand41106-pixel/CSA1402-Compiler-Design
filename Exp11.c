#include <stdio.h>
#include <string.h>

struct Symbol
{
    char name[20];
    char type[20];
};

int main()
{
    struct Symbol table[20];
    int n=0, choice, i;
    char name[20];

    do
    {
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Search");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("Enter name: ");
            scanf("%s",table[n].name);

            printf("Enter type: ");
            scanf("%s",table[n].type);

            n++;
        }

        else if(choice==2)
        {
            printf("\nName\tType\n");

            for(i=0;i<n;i++)
                printf("%s\t%s\n",
                       table[i].name,
                       table[i].type);
        }

        else if(choice==3)
        {
            printf("Enter name to search: ");
            scanf("%s",name);

            for(i=0;i<n;i++)
            {
                if(strcmp(table[i].name,name)==0)
                {
                    printf("Found: %s\t%s\n",
                           table[i].name,
                           table[i].type);
                    break;
                }
            }

            if(i==n)
                printf("Not Found\n");
        }

    }while(choice!=4);

    return 0;
}