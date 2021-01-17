#include<stdio.h>
#include<conio.h>
int main(){
  int arr[5],z=0,x;
  clrscr();
  printf("Enter the values of array\n");
  for(x=0;x<5;x++){
    printf("ARRAY[%d] = ",x);
    scanf("%d",&arr[x]);
  }
  z=arr[0];
  for(x=0;x<5;x++){
    if(z>arr[x]){
      z=arr[x];
    }
  }
  printf("Smallest  value of array = %d\n",z);
  getch();
  return 0;
}