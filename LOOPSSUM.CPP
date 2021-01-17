#include<stdio.h>
#include<conio.h>
int main(){
  int a,j=0,z=0,y;
  clrscr();
  for(a=1;a<=20;a++){
  j++;
  printf("%d\n",a);
   if(j>=6&&j<=10){

    z=z+a;


  }
  if(j==10){

    printf("%d\n",z);
    z=0;

    j=0;
  }


  }
  getch();
  return 0;
}