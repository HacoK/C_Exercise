#include <stdio.h>

int main(){
          int a;
          int b;

          printf("Input two integer to be compared:\n");
          scanf("%d%d",&a,&b);

          if(a<b)
            a=b;
          
          printf("The larger of the two is %d",a);
}