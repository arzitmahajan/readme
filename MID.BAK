#include<stdio.h>
#include<conio.h>
int main(){
  int x,arr[8],c=4,k,z=0,y,mid =0;
  int len = sizeof(arr)/sizeof(int);
  clrscr();
  for(x=0;x<len;x++){
    printf("ARRAY[%d] = ",x);
    scanf("%d",&arr[x]);
  }
  x=0;
  if(len%2==0){
    mid = len/2;
    }
  else{
    mid = (len/2)+1;
  }
  printf("mid value = %d\n ",mid);
  for(x=0;x<len;x++){
    for(k=0;k<len;k++){
      if(arr[x]>arr[k]){
	z++;
      }
    }
      if(z==c){
	//arr[y]=arr[x];
	printf("ARRAY = %d\t %d",arr[x],c);

	}
      if(c==-1){
       break;
      }

       z=0;
  }
  getch();

  return 0;
}