#include<stdio.h>
#include<conio.h>
int main(){
   int x,y,z,n=1;
   clrscr();
   for(x=1;x<=9;x++){
   if(x<=5){
   for(z=1;z<=x;z++){
	printf(" ");
   }}
   if(x>5){
   for(z=5;z>=n;z--){
	printf(" "); }
	n=n+1;}
   printf("*\n");
   }
   getch();
   return 0;
}

