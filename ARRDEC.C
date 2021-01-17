#include<stdio.h>
#include<conio.h>
int main(){
  int x,ar[10],b=0,n=9,t=0;
  clrscr();
  for(x=0;x<10;x++){
    printf("ar[%d] = \n",x);
    scanf("%d",&ar[x]);
    }
  for(x=0;x<10;x+=2){
    t = ar[b];
    ar[b]=ar[n];
    ar[n]= t ;
    n--;
    b++;
  }
  for(x=0;x<10;x++){
    printf("ar[%d] = %d\n",x,ar[x]);
  }
  getch();
  return 0;}