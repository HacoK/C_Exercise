#include <stdio.h>

int main(){
          int multiplier;
          int multiplicand;
          
          for(multiplier=1;multiplier<10;multiplier++)
             {for(multiplicand=1;multiplicand<=multiplier;multiplicand++)
                 {printf("%d*%d=%d\t",multiplicand,multiplier,multiplicand*multiplier);}
              printf("\n");
             }
}