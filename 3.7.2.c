#include <stdio.h>

int main(){
          int h;
          int min;
          int s;

          printf("What is the time in s to be transferred?");
          scanf("%d",&s);

          h=s/3600;
          s=s%3600;
          min=s/60;
          s=s%60;

          printf("Time is %d h %d min %d s",h,min,s);
}