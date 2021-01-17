#include<stdio.h>
#include<conio.h>
int main(){
  int x,b,y=0,z=1;
  clrscr();
  printf("%d\n%d\n",y,z);
  for(x=1;x<=10;x++){
   b= y+z;
  printf("%d\n",b);

  y= z;
  z = b;}

  getch();
  return 0;
}