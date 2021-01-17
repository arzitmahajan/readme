#include<stdio.h>
#include<conio.h>
int main(){

  int n,x,y,c=0,f=0;
  int arr[40];
  clrscr();
  printf("Enter the size of an ARRAY");
  scanf("%d",&n);
  for(x=0;x<n;x++){
    printf("\nARRAY[%d]",x);
    scanf("%d",&arr[x]);
  }
  for(x=0;x<n;x++){
    if(arr[x]%2==0){
       c++;
	f+=arr[x];
    }

   // if(c>1){
      // f+=arr[x];}}
  }
  printf("%d",f);
  getch();
  return 0;
  }