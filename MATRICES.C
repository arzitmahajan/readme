#include<stdio.h>
#include<conio.h>
int main(){
 int x,y,arr[2][2],ay[3][4],i,j,c=0;
 clrscr();
 for(x=0;x<2;x++){
  for(y=0;y<2;y++){
   printf("ARRAY[%d][%d] = \t",x,y);
   scanf("%d",&arr[x][y]);

  }
  }
x=0;
y=0;
 for(x=0;x<2;x++){
  for(y=0;y<2;y++){
   printf("ARRAY[%d][%d] = \t",x,y);
   scanf("%d",&ay[x][y]);

  }
 }
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    arr[i][j] = arr[i][j]+ay[i][j];
    printf("ARRAY[%d][%d] = %d\t",i,j,arr[i][j]);
  }
  printf("\n");
 }
 getch();
 return 0;

}