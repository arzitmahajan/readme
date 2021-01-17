#include<stdio.h>
#include<conio.h>
int main(){
 int a,b,A[100][100],B[100][100],i,j,k,sum=0,C[100][100];
 int r1,c1,r2,c2;
 clrscr();
 printf("Enter the rows and colums  of array1\n");
 scanf("%d %d",&r1,&c1);
 printf("Enter the rows and colums  of array2\n");
 scanf("%d %d",&r2,&c2);

 if(r1==c2||r2==c1){
   for(a=0;a<r1;a++){
    for(b=0;b<c1;b++){
      printf("ARR1[%d][%d] =",a,b);
      scanf("%d",&A[a][b]);
    }
   }
a=0;b=0;
   for(a=0;a<r1;a++){
    for(b=0;b<c1;b++){
      printf("ARR2[%d][%d] =",a,b);
      scanf("%d",&B[a][b]);
    }
   }
a=0;b=0;
   for(i=0;i<r1;i++){
    for(j=0;j<r1;j++){
     for(k=0;k<r1;k++){
       sum =  sum+A[i][k]*B[k][j];
     }
     C[i][j] = sum+A[i][k]*B[k][j];
     printf("%d \t",sum);

     sum = 0;

    }
    printf("\n");
   }
   for(a=0;a<r1;a++){
    for(b=0;b<c1;b++){
      printf("ARR[%d][%d] = %d \t",a,b,C[a][b]);
    }
    printf("\n");
   }
}
 else{
 printf("Answer can't be generated!!");
 }
 getch();
 return 0 ;
}