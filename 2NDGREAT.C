#include<stdio.h>
#include<conio.h>
int main(){
  int arr[5],z=0,x,c=0;
  clrscr();
  printf("Enter the values of array\n");
  for(x=0;x<5;x++){
    printf("ARRAY[%d] = ",x);
    scanf("%d",&arr[x]);
  }
  for(x=0;x<5;x++){
    if(z<arr[x]){
       z=arr[x] ;
    }
    }
  for(x=0;x<5;x++){
     if(c<arr[x] && z>arr[x]){
	c=arr[x];
     }
    }

  printf(" 2nd Greatest value of array = %d\n",c);
  getch();
  return 0;
}