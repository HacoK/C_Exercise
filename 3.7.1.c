#include <stdio.h>

int main(){
          int h;
          int min;
          int s;

          printf("What is the time in s to be transferred?");
          scanf("%d",&s);

          min=s/60;
          s=s%60;
          h=min/60;
          min=min%60;

          printf("Time is %d h %d min %d s",h,min,s);
}