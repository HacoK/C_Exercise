#include <stdio.h>

int main(){
          int gotI=0,gotIN=0,count=0;
          char nextChar;

          printf("Enter your string:");

          do{
            scanf("%c",&nextChar);

            switch(nextChar){
            case 'i':
                gotI=1;
                gotIN=0;
                break;
            case 'n':
                if(gotI)
                  {gotI=0;
                   gotIN=1;}
                else
                   {gotI=0;
                    gotIN=0;}
            case 't':
                 if(gotIN)
                   count++;
                 gotI=0;
                 gotIN=0;
            default:
                 gotI=0;
                 gotIN=0;
            }
          }while(nextChar!='\n');
          
          printf("The number of 'int' is %d.",count);
}