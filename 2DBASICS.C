#include<stdio.h>
#include<conio.h>
int main(){
 int a[2][2]={{1,2},{11,12}};
 int x,y;
 clrscr();
 for(x=0;x<2;x++){
   for(y=0;y<2;y++){
    printf("%d\n",a[x][y]);
   }
   printf("\n");
 }

 getch();
 return 0 ;
}