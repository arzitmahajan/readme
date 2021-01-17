#include<stdio.h>
#include<conio.h>
int main(){
 //#EASY WAALA int a[5],b[5],c[10],z=0,x,y,k,l=1;
  int x=0,a[5],b[5],c[10],y=1,j,k;
  clrscr();

  //#EASY METHOD
 /* for(y=0;y<5;y++){
    printf("Enter the a[%d]  value:\n",y);
    scanf("%d",&a[y]);
    }
  for(x=0;x<5;x++){
    printf("Enter the b[%d] value:\n",x);
    scanf("%d",&b[x]);
    }

  for(k=0;k<10;k++){
      c[z]=a[y];
      z=z+2;
      y++;
      c[l]=b[x];
      l=l+2;
      x++;
      printf("C[%d] = %d\n",k,c[k]);
   } */
   for(x=0;x<5;x++){
   printf("A[%d] = \n",x);
   scanf("%d",&a[x]);
   }
   for(y=0;y<5;y++){
   printf("B[%d] = ",y);
   printf("\n");
   scanf("%d",&b[y]);
   }
   x=0;
   for(k=0;k<5;k++){
   c[x]=a[k];
   x+=2;
   }
   y=1;
   for(j=0;j<5;j++){
	c[y]=b[j];
	y+=2;
   }
   for(k=0;k<10;k++){
	printf("C[%d] = %d\n",k,c[k]);
   }
  getch();
  return 0;
}