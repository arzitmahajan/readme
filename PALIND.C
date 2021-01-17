#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
 int size,x,c=0,y,res=0;
 char str[20];
 clrscr();
 printf("Enter a string\n");
 gets(str);

 size=strlen(str);
 x= size/2;
 c=size;
 printf("%d\n",c);
 for(y=0;y<x;y++){
  c--;
  if(str[y]==str[c]){
   res++;
  }
 }
 if(res==x){
  printf("Palindrome\n");}
 else{
   printf("NOT Palindrome\n");
 }
 getch();
 return 0;
}
