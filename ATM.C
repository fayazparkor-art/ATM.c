 #include<stdio.h>
 int main()
{
int pin = 1234;
int enteredpin;
int choice   ;
float balance = 5000;
float amount;
printf("====welcome to atm ====\n");
printf("enter your pin:");
scanf("%d",&enteredpin);
if(enteredpin != pin)
{
printf("invalid pin!\n");
return 0;
}
printf("\nLogin succesful!\n");
do
{
printf("\n==== ATM MENU =====\n");
printf("1.check balance\n");
printf("2.deposit balance\n");
printf("3.withdraw money\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case1:
 printf("your balance :rs.%2f\n",balance);
 case2:
 printf("enter your deposit amount :");
 scanf("%f",&amount);
 if(amount>0)
 {
  balance = balance + amount;
  printf("money deposited succesfully!\n");
  printf("new balance: rs.%2f\n",balance);
 }
 else
 {
 printf("invalid amount!\n");
 }
 case3:
 printf("Enter withdral amount:");
 scanf("%f",&amount);
 if(amount<=0)
 {
 printf("invalid amount:\n");
 }
 else if (amount <= balance)
{
 balance = balance - amount ;
 printf("pleease collect your cash.\n");
 printf("remaining balance: rs.%.2f\n",balance);
}
else
{
printf("insufficient balance!\n");
}
break;
case4:
  printf("thamk you for using ATM!\n");
  break;
 default:
  printf("invalid choice!\n");
}
}while(choice !=4);
return 0;
}