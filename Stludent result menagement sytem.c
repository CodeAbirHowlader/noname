#include<stdio.h>
struct student{
char name[30];
int roll;
char dept[20];
int mark;

};


int main()
{
    int n;
    printf("Enter number of student: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
    printf("\t\n===Enter student Information===\n\n\n");

    printf("\t\nEnter student Name: ");
     scanf(" %[^\n]",&s[i].name);
    printf("\t\nEnter Roll: ");
    scanf("%d",&s[i].roll);
    printf("\t\nEnter dept name: ");
    scanf(" %[^\n]",&s[i].dept);
    printf("\t\nEnter mark: ");
    scanf("%d",&s[i].mark);
    printf("\t\n____________________________\n");

    }
     printf("\t\n=========================\n");
    printf("\t\n==Student result data base==\n\n");
   for(int i=0;i<n;i++)
   {
       printf("| Name: %s| |Roll: %d| |dept: %s| |mark: %d|\n",s[i].name,s[i].roll,s[i].dept,s[i].mark);
   }
}
