#include <stdio.h>
#define NUM 3

int main(){
int a[NUM][NUM]={{1,2,3},{4,5,6},{7,8,9}};
int b[NUM][NUM];
int i,j;

for(i=0;i<NUM;i++)
   {for(j=0;j<NUM;j++)
     printf("%d",a[i][j]);
    printf("\n");}

for(i=0;i<NUM;i++)
   for(j=0;j<NUM;j++)
     b[j][i]=a[i][j];

scanf("'\xA'");

for(i=0;i<NUM;i++)
   {for(j=0;j<NUM;j++)
     printf("%d",b[i][j]);
    printf("\n");}
}