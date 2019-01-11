/*¼ÆËãf(x,y)=x^y*/
#include <stdio.h>

double f(double x,int y);

int main(){
     double x;
     int y;
     double z;

     printf("Input x:");
     scanf("%lf",&x);
     printf("Input y:");
     scanf("%d",&y);

     z=f(x,y);
     printf("The value of %f^%d is %f",x,y,z);
}

double f(double x,int y){
     double result=1;
     for(y;y>0;y--)
         result=result*x;
     return result;
}