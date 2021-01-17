#include<stdio.h>
#include<conio.h>
int main(){
   float Q1,dis ,amount;
   clrscr();
   printf("Enter the quantity you want\n");
   scanf("%f",&Q1);
   amount = Q1*50;
   if(Q1<10){
   printf("Your bill is %f",amount);}
   if(Q1>=10 && Q1<15){
   dis =(amount)- ((amount/100)*5);
   printf("Your bill is %f",dis);}
   if(Q1>=15 && Q1<20){
   dis =(amount)- ((amount/100)*8);
   printf("Your bill is %f",dis);}
   if(Q1>=20 && Q1<25){
   dis =(amount)- ((amount/100)*10);
   printf("Your bill is %f",dis);}





   getch();
   return 0 ;




}