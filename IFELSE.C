#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,c,num1,num2,num3 ;
   clrscr();
   printf("enter three numbers:\n");
   scanf("%d%d%d",&a,&b,&c);
   if( a!=100){
   printf("enter the number again:");
   scanf("%d",&num1);
   printf("%d is the number",num1); }
   else{
   printf("valid operation");}
   if( b!=100){
   printf("enter the number again:");
   scanf("%d",&num2);
   printf("%d is the number",num2); }
   else{
   printf("valid operation");
   if( c!=100){
   printf("enter the number again:");
   scanf("%d",&num3);
   printf("%d is the number",num3);}
   else{
   printf("valid operation");}



   getch();
   return 0;

}}
