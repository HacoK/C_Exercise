#include <stdio.h>

int main(){
          int year;
          int month;

          printf("Enter the year and month to be tested:\n");
          
          scanf("%d",&year);
          scanf("%d",&month);

          if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)  
            printf("The month has 31 days.\n");

          else if(month==4||month==6||month==9||month==11)  
            printf("The month has 30 days.\n");

          else if(month==2)
                 if(year%4==0)
                   if(year%100==0)
                     if(year%400==0)
                       printf("The month has 29 days.\n");
                     else
                       printf("The month has 28 days.\n");
                   else
                     printf("The month has 29 days.\n");
                  else
                   printf("The month has 28 days.\n");
}