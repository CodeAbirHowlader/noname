#include<stdio.h>
#include<string.h>
int main()
{

    FILE *file;
    char name[20]= "Abir howlader";
    int length = strlen(name);
   file = fopen("text.txt","w");
    int i= 1;
    if(file==NULL)
        printf("File doesNot exist");
    else{
        printf("File is open");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully ");
        fclose(file);


    }
}
