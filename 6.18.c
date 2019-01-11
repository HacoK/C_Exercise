#include <stdio.h>

int main(){
          char nextChar;

          printf("Enter your string:");

          do{
          scanf("%c",&nextChar);
          
          if(nextChar!=' ')
          printf("%c",nextChar);
          }while(nextChar!='\n');

          return 0;
}
          