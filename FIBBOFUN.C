#include<stdio.h>
#include<conio.h>
void swap(int num){
 int x,a=0,b=1,f=0;
 printf("%d\n",a);
 printf("%d\n",b);
 for(x=2;x<num;x++){
	f=a+b;
	a=b;
	b=f;

  printf("%d\n",f);}
}
int main(){
 int num;
 clrscr();
 printf("Enter the number upto which u want to find series\n");
 scanf("%d",&num);
 swap(num);
 getch();
 return 0 ;
}
