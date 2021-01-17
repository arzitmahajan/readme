#include<stdio.h>
#include<conio.h>
int main(){
 int a,b,A[2][2],B[2][2],i,j,k,sum=0;
 clrscr();
  for(a=0;a<2;a++){
   for(b=0;b<2;b++){
     printf("ARR1[%d][%d] =",a,b);
     scanf("%d",&A[a][b]);
   }
  }
a=0;b=0;
  for(a=0;a<2;a++){
   for(b=0;b<2;b++){
     printf("ARR2[%d][%d] =",a,b);
     scanf("%d",&B[a][b]);
   }
  }
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
    for(k=0;k<2;k++){
      sum = sum+A[i][k]*B[k][j];
    }
    printf("%d \t",sum);
    sum = 0;
   }
   printf("\n");
  }


 getch();
 return 0 ;
}