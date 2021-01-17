#include<stdio.h>
#include<conio.h>
int main(){
  int array[10],x,y=0;
  clrscr();
  for(x=0;x<10;x++){
    scanf("%d",&array[x]);}
  for(x=0;x<10;x+=2){
    y= array[x];
    array[x]=array[x+1];
    array[x+1]=y;
  }
  for(x=0;x<10;x++){
    printf("%d ARRAY's VALUE = %d\n",x,array[x]);
  }
  getch();
  return 0;
}