#include<stdio.h>
#include<conio.h>
int main(){
  int x,y;
  clrscr();
  for(x=1;x<=5;x++){
     printf("%d\n",x);
     for(y=1;y<=x;y++){
       printf("%d",y);}
       printf("\n");
       printf("%d\n",x);

  }

  getch();
  return 0 ;
}