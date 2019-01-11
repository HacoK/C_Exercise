#include <stdio.h>

int main(){
          int i=1,j=1;
          int k,result;
          int n;

          printf("Number of term:");
          scanf("%d",&n);
          
          if(n==0||n==1)
            result=1;
          else
            {for(k=2;k<n;k++)
               {i=i+j;
                j=i-j;}
             result=i+j;}
          
          printf("f(%d)=%d",n,result);
}