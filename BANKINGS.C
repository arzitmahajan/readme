#include<stdio.h>
#include<conio.h>
int main(){
   clrscr();
   int budget,choice,amount,dep,with,pan;
   printf("Enter your Balance\n");
   scanf("%d",&budget);
   printf("Enter your Choice\n");
   printf("Enter 1 for deposition\nEnter 2 for withdrawl\nEnter 3 to check balance\n");
   scanf("%d",&choice);
   switch(choice){
   case 1:
   printf("Enter the amount for deposition");
   scanf("%d",&amount);
   if(amount>=5000){
	printf("Enter your pan card number");
	scanf("%d",&pan);
	dep=amount+budget;
	printf("Your latest budget is %d",dep);}
   else{
	dep=amount+budget;
	printf("Your latest budget is %d",dep); }

  break;
   case 2:
   printf("Enter the amount for withdrawl");
   scanf("%d",&amount);
   if(amount>=5000){
	printf("Enter your pan card number");
	scanf("%d",&pan);
	with=budget-amount;
	if(with>=amount){
	printf("atleast Rs500 is needed in your account");
	printf("enter the amount for withdrawl");
	scanf("%d",&amount);
	with=budget-amount;
	printf("Your latest budget after withdrawl is %d",with); }}
    else{
	with=budget-amount;
	printf("%d is withdrawl amount\n",with);
	if(with==0 || with<0){
	printf("atleast Rs500 is needed in your account\n");
	printf("enter the amount for withdrawl");
	scanf("%d",&amount);
	with=budget-amount;
	printf("Your latest budget after withdrawl is %d",with); }}
    break;
    case 3:
	  printf("your balance is %d",budget);

    }


   getch();
   return 0;
}