#include<stdio.h>
#include<conio.h>
int  add(int a,int b){
 return a+b;
}

int sub(int a, int b){
 return a-b;
}

int multi(int a, int b){
 return a*b;
}

int div(int a,int b){
 return a/b;}

void optn(){
 printf("\t\t\ta.) PRESS 1 to ADD>>>>\n");
 printf("\t\t\tb.) PRESS 2 to SUBTRACT>>>>\n");
 printf("\t\t\tc.) PRESS 3 to MULTIPLY>>>>\n");
 printf("\t\t\td.) PRESS 4 to DIVIDE>>>>\n");
 printf("\t\t\t<<< PRESS Y to exit>>>>\n");
}

void main(){
 int a,b,c,e,y=0;
 char ext;
 clrscr();

 while(y==0){
  printf(">>>>Enter Two Numbers>>>>\n");
  scanf("%d %d",&a,&b);
  optn();
  scanf("%d",&c);
  if(c==1){
   e = add(a,b);
  }
  else if(c==2){
  e = sub(a,b);
  }
  else if(c==3){
   e = multi(a,b);
  }
  else if(c==4){
   e = div(a,b);
  }
  else{
   break;
  }
  printf("\t\t\t %d is your answer \t\t\n",e);
 }
 getch();
}