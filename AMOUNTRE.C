#include<stdio.h>
#include<conio.h>
int main(){
  int x ,b,amount=0 ;
  clrscr();
  for(x=1;x<=7;x++){
  printf("Enter the number of bottles returned on day %d:\n",x);
  scanf("%d",&b);

  amount=(amount +b);
  }
  amount *= 10;
  printf("Total amount returned in 7 days is %d",amount);
  getch();
  return 0;
}