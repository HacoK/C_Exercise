#include <stdio.h>

int main(){
          int i,j,a=1,n;
          double b,c,pi=0;

          printf("Number of terms:");
          scanf("%d",&n);

          for(j=1;j<=n;j++)
             {for(i=0;i<j+1;i++)
                 a=a*-1;
              b=4.0/(2*j-1);
              pi=pi+a*b;}
          
          printf("The approximate value of pi is %lf\n",pi);
}