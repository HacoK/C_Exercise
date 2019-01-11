#include <stdio.h>
#define MAX_NUMBER 11

char Transform(char m,int n);
int main(){
char str[MAX_NUMBER];
int n,i=0;

printf("Input a string(<%d):",MAX_NUMBER);
scanf("%s",str);
printf("Input n(between 1 to 9):");
scanf("%d",&n);

while(str[i]!='\0')
{str[i]=Transform(str[i],n);
i++;}

printf("%s",str);
}

char Transform(char m,int n)
{if(m>126-n)
m=m-(94-n);
else
m=m+n;
return m;}