#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i ,choice;
float cash=0;
char c;
do{
printf(" enter your choice \n1-withdraw\n2-deposit\n3-check balance account \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
int withdraw;
printf("enter the amount to withdraw :");
scanf("%d",&withdraw);
if(withdraw%100==0)
{
if(cash>=withdraw)
{
cash-=withdraw;
printf("amount of withdraw  of cash is %f\n",cash);
}
else
{
printf("you don't have enough amount to withdraw please deposit amount\n");
}
}
else
{
printf("enter withdraw amount in 100 \n");
}
break;
}
case 2:
{
int deposit;
printf("enter amount to deposit\n:");
scanf("%d",&deposit);
if(deposit%100==0)
{
cash=cash+deposit;
printf("balance after depositing amount is %f\n",cash);
}
else
{
printf("please enter amount in 100\n");
}
break;
}
case 3:
{
printf("balance in the account is %2f\n",cash);
break;
}
default:
{
printf("enter valid choice\n");
break;
}
}
printf("to continue press 'Y' else any letter\n");
fflush(stdin);
scanf("%c",&c);
}
while(c=='Y'||c=='Y');
printf("thanks for using our ATM \n");

}
