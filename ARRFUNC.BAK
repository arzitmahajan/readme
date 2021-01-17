#include<stdio.h>
#include<conio.h>
int put(int arr[],int pos,int val){
int x;
 for(x=5;x>pos;x--){
  arr[x]=arr[x-1];
 }
 arr[pos]=val;
x=0;
 for(x=0;x<=5;x++){
   printf("ARRAY[%d] = %d\n",x,arr[x]);
 }
 return 0;
}
void main(){
 int val,pos;
 int arr[]={11,12,13,14,15};
 clrscr();
 printf("Enter the position where you want to store the array\n");
 scanf("%d",&pos);
 printf("Enter the value you want to store\n");
 scanf("%d",&val);
 put(arr,pos,val);
 getch();

 }