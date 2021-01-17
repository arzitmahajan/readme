#include<stdio.h>
#include<conio.h>
int swap(int a,int b){
 if(a>b){
  return a;
 }
 else{
 return b;
 }
}
int wap(int a,int b,int c){
 int b1;
 if(a>b){
  b1=a;
  }
  else{
   b1=b;
  }

 if(b1>c){
  return b1;
 }
 else{
  return c;
 }
}
int infinity(int arr2[]){
 int x,y=0;
 for(x=0;x<5;x++){
  if(y<arr2[x]){
	y=arr2[x];
  }
 }
 return y;
}

void main(){
 int a,b,c,num,e,y;
 int arr[5];
 clrscr();
 printf("Press 1 to find the greatest btw 2 numbers\n");
 printf("Press 2 to find the greatest btw 3 numbers\n");
 printf("Press 3 to find the greatest numbers of your choice\n");
 scanf("%d",&num);
 if(num==1){
  printf("ENTER TWO NUMBERS\n");
  scanf("%d %d",&a,&b);
  e=swap(a,b);
  printf("Greatest number btw the two is %d\n",e);
 }
 else if(num==2){
  printf("ENTER THREE NUMBERS\n");
  scanf("%d %d %d",&a,&b,&c);
  e = wap(a,b,c);
  printf("Greatest number btw the three is %d\n",e);
 }
 else if(num ==3){
  printf("Enter all the numbers\n");
   for(y=0;y<5;y++){
     printf("Number %d = ",y);
     scanf("%d",&arr[y]);
   }
  e = infinity(arr);
  printf("Greatest number btw all numbers is %d\n",e);
 }
 getch();
}