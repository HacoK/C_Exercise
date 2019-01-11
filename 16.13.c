#include <stdio.h>
#include <string.h>
#define MAX_NUMBER 20

int main(){
int n=4;
char a[n][MAX_NUMBER];
int i,j;
int e=1;

for(i=0;i<n;i++)
{printf("Input string%d(<%d):",i+1,MAX_NUMBER);
scanf("%s",a[i]);}

for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++)
if(!strcmp(a[i],a[j]))
strcpy(a[j],a[0]);}

printf("%s ",a[0]);
for(i=1;i<n;i++)
if(strcmp(a[i],a[0]))
{strcpy(a[e],a[i]);
 e++;
 printf("%s ",a[i]);}
}