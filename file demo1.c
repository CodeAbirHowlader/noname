#include<stdio.h>
int main()
{

    FILE *file;
   file = fopen("text.txt","w");

    if(file==NULL)
        printf("File doesNot exist");
    else{
        printf("File is open");
        fclose(file);


    }
}
