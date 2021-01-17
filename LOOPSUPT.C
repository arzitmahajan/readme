#include<stdio.h>
#include<conio.h>
int main(){
  int a,j=0,z=0,y;
  clrscr();
  for(a=1;a<=100;a++){
  j++;
   if(j>=6&&j<=10){
    z=z+a;
   }
  if(j<=5){
    printf("%d\t",a);
  }
  if(j==10){
    printf("%d\t",z);
    j = 0;
    z = 0;
  } }
  getch();
  return 0;
}