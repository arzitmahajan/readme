#include<stdio.h>
#include<conio.h>
int main(){
  int a,b,rem,c,d,e;
  clrscr();
  printf("enter the two numbers\n");
  scanf("%d %d",&a,&b);
  rem = a%b;
  if(rem==1){
  printf("enter one  number\n");
  scanf("%d",&c);
  printf("Numbers is  %d \n",c);}
  else if(rem==2){
  printf("enter two numbers\n");
  scanf("%d %d ",&c,&d);
  printf("Numbers are %d %d \n",c,d);}
  else if(rem==3){
  printf("enter three numbers\n");
  scanf("%d %d %d",&c,&d,&e);
  printf("Numbers are %d %d %d\n",c,d,e);}
  else{
  printf("Game Over!!\n");
  }


  getch();
  return 0;
}