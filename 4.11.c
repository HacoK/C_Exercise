#include <stdio.h>

int main(){
          int i,j,n;

          printf("The number of lines:");
          scanf("%d",&n);

          for(j=1;j<=n;j++)
             {for(i=1;i<=j;i++)
              printf("%d\t",j);
              printf("\n");}
}