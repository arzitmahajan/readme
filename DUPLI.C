#include <stdio.h>
#include<conio.h>
int main(){
  int f=0, x,y,arr[5],c=0 ;
  clrscr();
  printf("Enter the values of array \n");
  for(x=0;x<5;x++){
    printf("ARRAY[%d] = ",x);
    printf("\n");
    scanf("%d",&arr[x]);
  }
  for(x=0;x<5;x++){
     for(y=0;y<5;y++){
       if(arr[x]==arr[y]){
	 c++;

       }
       }
     if(c>1){
	f=arr[x];
	printf("DUPLICATED value is %d\n",f);}
     c=0;
     }
  getch();
  return 0;
}