#include<stdio.h>
#include<conio.h>
void swap(int arr[], int len){
 int x;
 for(x=0;x<len;x++){
 arr[x] = arr[x+1];
 printf("UPDATED array[%d] = %d\n",x,arr[x]);
 }
}
int fac(int fact){
 int x,val=1;
 for(x=1;x<=fact;x++){
  val = val *x;
 }
 return val;
}
int main(){
 //int;
 int arr[] = {1,2,3,4,5};
 int len = sizeof(arr)/sizeof(int);
 int fact,emp = 0;
 clrscr();
 printf("The array is {1,2,3,4,5}\n");
 printf("LENGTH OF ARRAY IS %d \n",len);
 swap(arr,len);
 printf("Enter the number for which you want to find the factorial\n");
 scanf("%d",&fact);
 emp=fac(fact);

 printf("FACTORIAL OF %d = %d",fact,emp);
 getch();
 return 0;
}

