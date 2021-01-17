#include<stdio.h>
#include<conio.h>
int didel(int arr[],int del){
 int k;
 for(k=0;k<5;k++){
  if(del==arr[k]){
    arr[k]=0;
  }
 }
k=0;

 for(k=0;k<5;k++){
  if(arr[k]==0){

   }
   else{
	printf("\n %d\n",arr[k]);
   }
 }

 return 0;
}
void posdel(int arr[],int pos){
 int a;
 for(a=pos;a<5;a++){
  arr[a]=arr[a+1];
 }
a=0;
 for(a=0;a<5;a++){
 printf("%d\n",arr[a]);}
}
int main(){
 int pos,x;
 int arr[]={11,12,13,14,15};
 int del;
 clrscr();
 printf("{11,12,13,14,15}\n");
 printf("Enter the value you want to delete\n");
 scanf("%d",&del);
 printf("Enter the position of array whose value you want to delete\n");
 scanf("%d",&pos);
 didel(arr,del);
// posdel(arr,pos);
 for(x=0;x<=5;x++){
  printf("ARRAY[%d] = %d",x,arr[x]);
 }
 getch();
 return 0;}