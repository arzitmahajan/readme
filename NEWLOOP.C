#include<stdio.h>
#include<conio.h>
int main(){
   int x, y=0
   ,z = 4 ;
   clrscr();
   for(x=1;x<=10;x++){
   y++;
   printf("%d",x);
   if(y==z){
   printf("\n");
   y=0;
   z--;

   }

   }
   getch();
   return 0 ;
 }