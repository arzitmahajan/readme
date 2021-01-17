#include<stdio.h>
#include<conio.h>
int main(){
  int x,num,arr[10],c=0;
  clrscr();
  for(x=0;x<10;x++){
    printf("Enter the values of arrays \n");
    printf("ARRAY[%d] = ",x);
    scanf("%d",&arr[x]);

  }
  printf("Enter the number you want to search: \n");
  scanf("%d",&num);
  for(x=0;x<10;x++){
    if(arr[x]==num){
    printf("Found\n");
    c++;
    break;
    }
  }
  if(c==0){
    printf("NOT FOUND!");
  }
  getch();
  return 0;
}