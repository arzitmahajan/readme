#include<stdio.h>
#include<conio.h>
int main(){
 int x,y,z,arr[3][3],n=0,i=0,j=0,c=0,a=0,b=0;
 clrscr();
  for(x=0;x<9;x++){
   scanf("%d",&n);
   for(y=0;y<3;y++){
   if(n==arr[i][y]){
     c++;
    }
   }
   if(c==0){
    arr[i][j]=n;
    printf("%d%d\n",i,j);
    j++;
    if(j==3){
	i++;
	j=0;
    }
   }
   else{
  printf("Duplicate \n");
  x--;
  }
  c=0;

  }


x=0;
y=0;
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
    printf("ARRAY[%d][%d] = %d\t",x,y,arr[x][y]);
  }
  printf("\n");
 }
 getch();
 return 0;

}