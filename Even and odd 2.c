#include<stdio.h>
void  Even_or_odd();
int main()
{
    while(1)
    {
        printf("\t\t\t\n\n\n===Even or Odd====\n");
        printf("\t\t\t\n1)Even or odd\n");
        printf("\t\t\t\n2)Exit");
        printf("\t\t\t\n__________________\n");
        printf("\t\t\t\nChoice one Option: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Even_or_odd();
            break;
        case 2:
            printf("\t\t\t\nThank you so much.See you again\n");
            break;
        default:
            printf("\t\t\t\nInvalid number\n");
        }

    }
}
void  Even_or_odd()
{
    int num;
    printf("\t\t\t\nEnter a number : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("\t\t\t\nEven number");
    else
        printf("\t\t\t\nOdd number");
}
