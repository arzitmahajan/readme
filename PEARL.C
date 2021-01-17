#include<stdio.h>
#include<conio.h>
int main()
{
   int A,B,C,D,x=0;
   clrscr();
   printf("enter the value of A,B,C,D:\n");
   scanf("%d%d%d%d",&A,&B,&C,&D);
   A=A/2;
   x=x+A;
   A=A/2;
   x=x+A;
   B=B+x;
   B=B+1000;
   B=B-x;
   A=A+x;
   C=C/4;
   D=D+C;
  // B=B+1000-A;
   D=D+1000-C;


   printf("Final value of A,B,C,D are\n%d\n%d\n%d\n%d\n :\n",A,B,C,D);
   getch();
   return 0;




}