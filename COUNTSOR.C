#include<stdio.h>
#include<stdio.h>
int main(){
  int c=0,x,y,ar[5],ct=4,a;
  clrscr();
  printf("ENTER THE VALUES OF ARRAY\n");
  for(a=0;a<5;a++){
  scanf("%d",&ar[a]);
  }
  for(x=0;x<5;x++){
    for(y=0;y<5;y++){
      if(ar[x]>ar[y]){
	c++;
      }

    }
    if(c==ct){
      printf("%d \n",ar[x]);
      x=-1;ct--;
    }
    c=0;
  }
  getch();
  return 0;
}