#include <stdio.h>

void D2B(int n,int a[32],int *i);

int main(){
int n,j=31;
int a[32];
int i=0;

while(j>=0)
{a[j]=0;
j--;}

printf("Enter an integer in decimal:");
scanf("%d",&n);

if(n<0)
{printf("-");
 n=-n;}

D2B(n,a,&i);

j=31;
while(j>=0)
{printf("%d",a[j]);
j--;}
}

void D2B(int n,int a[32],int *i){
a[*i]=n%2;
*i=*i+1;
if(n/2)
D2B(n/2,a,i);
}