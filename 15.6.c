#include <stdio.h>
int FL(int x);

int main(){
     int x,y,i=2,j=2,m,n;
     printf("Input your first number:");
     scanf("%d",&x);
     printf("Input your second number:");
     scanf("%d",&y);

     if(x<2||y<2){
         if(x==7||x==9||y==7||y==9)
           i=i+1;
         for(i;i>=0;i--){
             if(x>1)
             m=FL(x)+i;
             if(y>1)
             m=FL(y)+i;
             printf("%c\t",m);
         }
     } 
    if(x>1&&y>1)       
       if(x==7||x==9)
         i=i+1;
       for(i;i>=0;i--){
         m=FL(x)+i;
         j=2;
         if(y==7||y==9)
         j=j+1;
         for(j;j>=0;j--){
             n=FL(y)+j;
             printf("%c%c\t",m,n);}
        }
}

int FL(int x){
     char m=0;
     if(2<=x&&x<=9)
        m=3*x+59;
     if(x>7)
        m=m+1;
     return m;
}    