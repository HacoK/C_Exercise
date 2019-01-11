/*Decide:素数返回1，否则返回0*/
/*找出所有小于100的素数*/

#include <stdio.h>

int Decide(int x);

int main(){
     int x=2;
     int a;

     for(x;x<100;x++){
         a=Decide(x);
         if(a==1)
           printf("%d\t",x);
     }
}

int Decide(int x){
     int y=2;
     int z=1;
     while(x>=y*y){
         if(x%y==0)
           z=0;
         y++;
      }
      return z;
}