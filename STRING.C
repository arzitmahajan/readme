#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
 char str[10];
 char nam[10];
 char a[20];
 char b[20];
 char c[2];
 int z,y;
 clrscr();
 gets(str);
 gets(nam);
 z = strcmp(str,nam);
 if(z==0){
 printf("Matched\n");
 }
 else{
 printf("Not matched\n");
 }
 gets(a);
 strcpy(b,a);
 puts(a);
 puts(b);
 puts(str);
 puts(nam);
 gets(c);
 strcat(a,"");
 puts(a);
 strcat(a,c);
 puts(a);
 gets(c);
 y = strlen(c);
 printf("%d",y);
 getch();
 return 0;
}