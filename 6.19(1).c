#include <stdio.h>

int main(){
          char nextChar;

          printf("Enter your string:");

          do{
          scanf("%c",&nextChar);

          if(nextChar>='a'&&nextChar<='z')
          nextChar=nextChar-32;

          printf("%c",nextChar);
          }while(nextChar!='\n');
          return 0;
}