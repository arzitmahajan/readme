#include<stdio.h>
#include<conio.h>
int main(){
  int a,j=100;
  clrscr();
  for(a=1;a<=100;a++){
  if(a<=50){
  printf("%d\t",a);

  }
  if(a>50){
  printf("%d\t",j);
  j--;}

 }
 getch();
 return 0;
}