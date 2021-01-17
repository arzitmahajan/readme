#include<stdio.h>
#include<conio.h>
int main(){
  int x,a,y,z=0,ar[5],c=0;
  clrscr();
  for(x=0;x<5;x++){
    scanf("%d",&z);
    for(y=0;y<x;y++){
      if(z==ar[y]){
	c++;
      }
    }
    if(c==0){
	ar[x]=z;
    }else{
	x--;
	printf("duplicate \n");
    }
    c=0;
  }
  for(a=0;a<5;a++){
    printf("ARRAY[%d] = %d ",a,ar[a]);

   }
  getch();
  return 0;
}