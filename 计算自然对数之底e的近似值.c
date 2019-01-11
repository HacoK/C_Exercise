#include <stdio.h>

int main(){
          int i,n;
          int result=1;
          double e=1;

          printf("Number of terms(must be 1 or larger):");
          scanf("%d",&n);

          for(i=1;i<=n;i++)
             {result=result*i;
              e=e+1.0/result;}

          printf("The approximate value of e is %f\n",e);
}