#include<stdio.h>
int main()
{
    int pin=140411;
    int Enteredpin;
    int choice;
    float balance=1000;
    float deposit,withdraw;
   printf("Enter your pin:");
   scanf("%d",&Enteredpin);
if(Enteredpin==pin)
{
   printf("login successful\n");
}
else
{
   printf("Invalid pin");
   return 0;
}
do
{
   printf("\n====ATM MENU====\N");
   printf("1.Balance enquiry\n");
   printf("2.Deposit Money\n");
   printf("3.Withdraw\n");
   printf("4.Exit\n");
   printf("enter your choice");
   scanf("%d",&choice);
switch (choice)
{
   case 1:printf("Balance available:%f",balance); break;
   case 2:printf("Enter ypour deposit amount:",deposit);
	 scanf("%f",&deposit);
	 balance+=deposit;
	 printf("Deposit successful\n");
	 printf("Thank you\n");
	 break;
   case 3:
   if(withdraw > balance)

	 printf("Insufficient fund\n");

   else
   {
	 printf("Enter your withdraw amount:",withdraw);
	 scanf("%f",&withdraw); balance-=withdraw;
	 printf("Withdraw successful\n");
	 printf("Thank you\n");
   }
   break;
   case4:printf("Thankyou for using ATM service\n");break;
   default:printf("Invalid choice\n");
}
}while (choice!=4);
   return 0;
}


