/*����ţ�ٵ���������f��x��=x^1/2*/
/*������ʽΪy(n+1)=(y(n)+x/y(n))/2*/
/*��ʼ��f(0)=x/2*/

#include <stdio.h>

double f(double,double);

int main(){
     double x;
     double answer;
     int n;

     printf("Input x:");
     scanf("%lf",&x);
     printf("Times of iteration:");
     scanf("%d",&n);

     answer=x/2;
     for(n;n>0;n--)
         answer=f(x,answer);
     printf("The value of %lf^1/2 is %lf",x,answer);
}

double f(double x,double answer){
     answer=(answer+x/answer)/2;
     return answer;
}