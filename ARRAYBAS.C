#include <stdio.h>
#include<conio.h>
int main(){
  int array[5],farray[5],val,z=0,array2[10],cop;
  clrscr();

  for(val=0;val<10;val++){
    if(val<5){
       scanf("%d",&array[val]);
       }
    if(val>=5){
       scanf("%d",&farray[z]);
       z++;
       }
    }
  //sum = sum+array[val];}
  z=0;
  for(val=0;val<10;val++){
    if(val<5){
       printf("VALUES ARE %d\n",array[val]);}
    if(val>=5){
       printf("VALUES ARE %d\n",farray[z]); z++;} }
 // printf("SUM OF ALL THE VALUES IS %d",sum);
 // printf("VALUES OF VAL ARE %d",val);
 z=0;
  for(val=0;val<10;val++){
   if(val<5){
      array2[val]=array[val];}
   if(val>=5){
      array2[val]=farray[z];
      z++;
      }
      }
  for(val=0;val<10;val++){
     printf("\nFINAL ARRAY's %d place = %d",val,array2[val]); }

  getch();
  return 0;
}