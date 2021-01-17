#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
 int x,z;
 char pre[4]="ok";
 char post[4];
 clrscr();
 printf("Enter a password\n");
 gets(post);
 strlwr(post);
 z=strcmp(pre,post);
 printf("%d",z);
 for(x=0;x<3;x++){
  if(z==0){
   printf("VALID!.");
   break;}
  else{
   printf("INVALID!.\n");
   gets(post);
   strlwr(post);
   z=strcmp(pre,post);
  }
 }
 getch();
 return 0;
 }