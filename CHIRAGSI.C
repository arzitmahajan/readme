#include<stdio.h>
#include<conio.h>
int main(){
   int x=1,y,z,n=1;
   clrscr();
   for(x=1;x<=5;x++){
   for(z=5;z>=x;z--){
	printf(" ");
   }
   for(y=1;y<=n;y++){
   printf("*");}
   n=n+2;
   printf("\n");
   }
   getch();
   return 0;
}