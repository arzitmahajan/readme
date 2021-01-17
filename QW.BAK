#include<stdio.h>
#include<conio.h>

void square(int a[],int b[],int len){
  int f,g=0,k,m=0;

	for(f=0;f<len;f++){
	 for(k=0;k<len;k++){
	    if(b[k]==a[f]*a[f]){
	     g++;
	  }
	  }
	  if(g>0){
		m++;
	  }
	  g=0;
	  }
	if(m==len){
	   printf("TRUE");
	   }
	else{
	    printf("FALSE");}

}
int main(){
  int i,x;
  int a[] = {1,2,3,4,5};
  int b[5];
  int len = sizeof(a)/sizeof(int);
  clrscr();
  for(x=0;x<len;x++){
      printf("enter the sqaure of %d a[] = ",x);
      scanf("%d",&b[x]);
  }
  square(a,b,len);

  getch();
  return 0;
  }