#include <stdio.h>

int main(){
          char result;
          int input;

          printf("Input an integer:");
          scanf("%d",&input);

          if(!(input%7))
            result='T';
          else
            result='F';

          printf("The result is %c\n",result);
}