/*#include<stdio.h>
#include<conio.h>
int main(){

  int choice,bill;
  char name[20];
  clrscr();
  printf("Whats your name?\n");
  scanf("%s",&name);
  printf("Hello Mr.%s welcome to hotel newday\n",name);
  printf("For how many days you want to stay in hotel\n");
  scanf("%d",&choice);
  if(choice>=1 && choice<=3){
  bill = (choice*100);
  printf("Your total rent for %d days is  %d\n",choice,bill); }
  if(choice>=4 && choice<=6){
  bill = ((choice-3)*90) + 300;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  if(choice>=7 && choice<=8){
  bill = ((choice-6)*80) +270 +300 ;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  if(choice>=8){
  bill = ((choice-8)*70) +300 +270 +160;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }









  getch();
  return 0;
} */
#include<stdio.h>
#include<conio.h>
int main(){

  int choice,bill;
  char name[20];
  clrscr();
  printf("Whats your name?\n");
  scanf("%s",&name);
  printf("Hello Mr.%s welcome to hotel newday\n",name);
  printf("For how many days you want to stay in hotel\n");
  scanf("%d",&choice);
  if(choice==1){
  bill = (choice*100);
  printf("Your total rent for %d days is  %d\n",choice,bill); }
  else if(choice ==2){
  bill = (choice*100);
  printf("Your total rent for %d days is  %d\n",choice,bill); }
  else if(choice == 3){
  bill = (choice*100);
  printf("Your total rent for %d days is  %d\n",choice,bill); }
  else if(choice == 4){
  bill = ((choice-3)*90) + 300;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  else if(choice == 5){
  bill = ((choice-3)*90) + 300;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  else if(choice == 6){
  bill = ((choice-3)*90) + 300;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  else if(choice == 7){
  bill = ((choice-6)*80) +270 +300 ;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  else if(choice == 8){
  bill = ((choice-6)*80) +270 +300 ;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }
  else if(choice>8){
  bill = ((choice-8)*70) +300 +270 +160;
  printf("Your total rent for %d days is  %d\n",choice,bill);  }


  getch();
  return 0;
}