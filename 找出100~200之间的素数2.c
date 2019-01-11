#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
          int num;
          int divisor;
          int prime;

          for(num=100;num<=200;num++)
             {for(divisor=2;divisor<=14;divisor++)
                 {prime=TRUE;
                  if(num%divisor==0)
                     {prime=FALSE;
                      break;}
                 }
              if(prime)
                printf("The number %d is prime\n",num);
              }
}