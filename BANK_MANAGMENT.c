
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// Structure declaration
struct acc_type
{
     char nameofbank[20];
     char nameofbranch[20];
     char nameofperson[30];
     int noofacc;
     char address[100];
     float balance;
};struct acc_type account[50];



int num_acc;

void newaccount();
void deposit();
void withdraw();
void info();
void exit();

void transfer();

/* main program */
int main()
{
    char opt;

    num_acc=0;
    int p = 1234;
    int c;
    printf("Enter password(1234) to continue \n");
    scanf("%d",&c);
    if(c==p)
    {
    printf("correct password");
    while(1)
    {
       printf("\nBank Application\n");

       printf("\n1. Create new account \n");
    printf("2. Cash withdrawl \n");
    printf("3. Cash Deposit \n");
    printf("4. Transfer money \n");
    printf("5. Log out \n");
    printf("6. Clear the screen\n ");
    printf("7. To Display Account information\n");

    printf("opts \n\n");
       printf(" (1/2/3/4/5/6/7) ");


        opt = getch();
        printf("%c \n", opt);
        switch(opt)
        {
          case '1': newaccount();
                    break;
           case '2': withdraw();
                    break;
          case '3': deposit();
                    break;

          case '4': transfer();
                    break;
          case '5': return 0;



          case '6': system("cls");
                    break;
            case '7': info();
                    break;

          default : system("cls");
                    printf("Enter Any Given option number to continue");
                    printf("(1/2/3/4/5/6/7) to continue \n ");
                    break;
        }
    }
    }
    else
        return 0;
}





void transfer()
{
    auto int acc_no;
    auto int acc_no2;
    float add_money;
    float withdraw_money;
    int i;
    printf("account number 1:");
   scanf("%d",&acc_no);
   printf("\n Remaining Balance in Account Number %d is %f \n",acc_no, account[acc_no-1].balance);
   printf("\n deposit :  ");
   scanf("%f",&add_money);
   printf(" account number 2:");
   scanf("%d",&acc_no2);

   for(i=acc_no;acc_no=account[acc_no-1].noofacc;acc_no++)
   {
         account[acc_no-1].balance=
         account[acc_no-1].balance+add_money;
         printf("\n Remaining Balance in Account Number %d is %f \n",
         acc_no, account[acc_no-1].balance);

   }
   for(i=acc_no2;acc_no2=account[acc_no2-1].noofacc;acc_no2++)
   {
         account[acc_no2-1].balance=
         account[acc_no2-1].balance-add_money;
         printf("\n balance %d is %f \n",
         acc_no2, account[acc_no2-1].balance);

   }

}
void deposit()
{
   auto int acc_no;
   float add_money;

   printf("account number:");
   scanf("%d",&acc_no);
   printf("\n Remaining Balance in Account Number %d is %f \n",acc_no, account[acc_no-1].balance);
   printf("\ndeposit :  ");
   scanf("%f",&add_money);

   while (acc_no=account[acc_no-1].noofacc)
   {
         account[acc_no-1].balance=
         account[acc_no-1].balance+add_money;
         printf("\n Remaining Balance in Account Number  %d is %f \n",acc_no, account[acc_no-1].balance);
         break;
   }acc_no++;


}


void info()
{
     int num_acc;
     printf("\n Enter Account number to get Information \n");
     scanf("%d",&num_acc);



         printf("\nBank              : %s \n" ,
         account[num_acc-1].nameofbank);
         printf("branch              : %s \n" ,
         account[num_acc-1].nameofbranch);
         printf(" name               : %s \n" ,
         account[num_acc-1].nameofperson);
         printf("Account num         : %d \n" ,
         account[num_acc-1].noofacc);
         printf("address             : %s \n" ,
         account[num_acc-1].address);
         printf("balance             : %f \n\n" ,
         account[num_acc-1].balance);


}

void withdraw()
{
   auto int acc_no;
   float withdraw_money;

   printf("account numb :");
   scanf("%d",&acc_no);
   printf("\n Remaining Balance in Account Number  %d is %f \n",acc_no, account[acc_no-1].balance);
   printf("\nwithdraw  ");
   scanf("%f",&withdraw_money);

   while (acc_no=account[acc_no-1].noofacc)
   {
         account[acc_no-1].balance=
         account[acc_no-1].balance-withdraw_money;
         printf("\nbalance %d is %f \n",
         acc_no, account[acc_no-1].balance);
         break;
   }acc_no++;
}

void newaccount()
{
   char nameofbank[20];
   char nameofbranch[20];
   char nameofperson[30];
   int noofacc;
   char address[100];
   float balance = 0;
   fflush(stdin);
   printf("\nbank name          : ");
   scanf("%s", &nameofbank);
   printf("\nbranch             : ");
   scanf("%s", &nameofbranch);
   printf("\nname               : ");
   scanf("%s", &nameofperson);
   printf("\nacount num (1-100) : ");
   scanf("%d", &noofacc);
   printf("\naddress            : ");
   scanf("%s", &address);

   strcpy(account[noofacc-1].nameofbank,nameofbank);
   strcpy(account[noofacc-1].nameofbranch,nameofbranch);
   strcpy(account[noofacc-1].nameofperson,
   nameofperson);
   account[noofacc-1].noofacc=noofacc;
   strcpy(account[noofacc-1].address,
   address);
   account[noofacc-1].balance=balance;


   printf("Bank              : %s \n" ,
   account[noofacc-1].nameofbank);
   printf("branch            : %s \n" ,
   account[noofacc-1].nameofbranch);
   printf("name              : %s \n" ,
   account[noofacc-1].nameofperson);
   printf("Acount num        : %d \n" ,
   account[noofacc-1].noofacc);
   printf("address           : %s \n" ,
   account[noofacc-1].address);
   printf("balance           : %f \n" ,
   account[noofacc-1].balance);



}
