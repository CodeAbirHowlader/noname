#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20];
    int length=strlen(name);
    int i=0;
    file = fopen("text.txt","w");
    if (file==NULL)

        printf("File does not exist ");


    else
    {
        printf("File is open");

           printf(" Enter your full name ");
            gets(name);

            fputs(name,file);
            fputs("\n",file);
            printf("Name written successfully ");
            fclose(file);

        fclose(file);
    }
}
