#include<stdio.h>
#include<conio.h>

void square(int a[],int b[],int len){
  int f,g=0,k,m=0;

	for(f=0;f<len;f++){
	 for(k=0;k<len;k++){
	    if(b[k]==a[f]){
	     g++;
	     if(g>1){
		b[k]=0;
	     }
	    }
	  }
	  g=0;
	  }
	for(k=0;k<5;k++){
	   printf("%d \n",b[k]);
	}

}
int main(){
  int i,x;
  int a[] = {1,2,3,4,5};
  int b[] = {1,1,1,4,5};
  int len = sizeof(a)/sizeof(int);
  clrscr();

  square(a,b,len);

  getch();
  return 0;
  }