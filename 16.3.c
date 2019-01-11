#include <stdio.h>
#define MAX_NUMBER 5

int main(){
int a[MAX_NUMBER];
int i,j;
int e=1;

for(i=0;i<MAX_NUMBER;i++)
{printf("Input number%d(%d):",i+1,MAX_NUMBER);
scanf("%d",&a[i]);}

for(i=0;i<MAX_NUMBER-1;i++){
for(j=i+1;j<MAX_NUMBER;j++)
if(a[i]==a[j])
a[j]=a[0];
}

printf("%d ",a[0]);
for(i=1;i<MAX_NUMBER;i++)
if(a[i]!=a[0])
{a[e]=a[i];
 e++;
 printf("%d ",a[i]);}
}