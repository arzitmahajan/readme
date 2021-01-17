#include<stdio.h>
#include<conio.h>
struct gem{
 int roll[4];
 int py[4];
 int java[4];
 int c[4];
};
int main(){
 int x;
struct  gem ob;
 clrscr();

 for(x=0;x<=4;x++){
  printf("Student[%d] enter your roll-no.\n",x);
  scanf("%d\t",&ob.roll[x]);
  printf("Enter your marks in python\n");
  scanf("%d",&ob.py[x] );
  printf("Enter your marks injava\n");
  scanf("%d",&ob.java[x] );
  printf("Enter your marks in c\n");
  scanf("%d",&ob.c[x] );
 }
 x=0;
 for(x=0;x<=4;x++){
  printf("MARKS IN PYTHON = %d\n",ob.py[x]);
  printf("MARKS IN JAVA = %d\n",ob.java[x]);
  printf("MARKS IN C LANG = %d\n",ob.c[x]);
  printf("ROLL NO. = %d\n",ob.roll[x]);
 }
 getch();
 return 0;
}