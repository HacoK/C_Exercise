#include <stdio.h>

int main(){
          int i;
          int Num;

          printf("Input the number in decimal to be transferred:");
          
          scanf("%d",&Num);

          for(i=31;i>=0;i--){
             if(Num&(1<<i))
               printf("1");
             else
               printf("0");}
}