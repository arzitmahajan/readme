#include<stdio.h>
#include<conio.h>
int main(){
  int x ,y,n=2 ;
  clrscr();
  for(x=1;x<=10;x++){
   if(x<=5){
     for(y=1;y<=x;y++){
       printf("*",y);}
       printf("\n");}
   else{
     for(y=5;y>=n;y--){
       printf("*",y);}
       n=n+1;
       printf("\n");}}
  getch();
  return 0;
}