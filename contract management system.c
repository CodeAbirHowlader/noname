#include<stdio.h>
void addContract()
{
    FILE *contract;
    contract = fopen("contract.txt","a");
    if(contract== NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is open\n");
        char name[50];
        char phone[50];
        char email[50];

        printf("Enter your name ");
        fgets(name,sizeof name,stdin);

        printf("Enter your phone ");
        fgets(phone,sizeof phone,stdin);

        printf("Enter your email ");
        fgets(email,sizeof email,stdin);


       fprintf(contract,"%s%s%s\n",name,phone,email);
       printf("Contract added successfully ");
        fclose(contract);
    }
}
int main()
{
    addContract();
}
