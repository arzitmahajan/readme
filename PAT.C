#include<conio.h>
#include<stdio.h>
void main(){
int x,y,z,n=1,mm=7;
clrscr();
	for(x=1;x<=9;x++){
	   if(x<=5){
	       for(z=5;z>=x;z--){
		    printf(" ");
	       }
	       for(y=1;y<=n;y++){
		      printf("*");
	       }
	       n=n+2;
	       printf("\n");
	   }else{
	      for(z=5;z<=x;z++){
		  printf(" ");
	      }
	      for(y=1;y<=mm;y++){
	       printf("*");
	      }
	      mm=mm-2;



	      printf("\n");
	   }
	}


getch();
}