#include <stdio.h>
#define MAX_STRING 20
int StrCat(char *firstStr,char *secondStr);

int main(){
char firstStr[MAX_STRING];
char secondStr[MAX_STRING];
int r;

printf("Enter the firstStr(<%d):",MAX_STRING);
scanf("%s",firstStr);
printf("Enter the secondStr(<%d):",MAX_STRING);
scanf("%s",secondStr);

r=StrCat(firstStr,secondStr);

if(r)
printf("The catenation(LT %d) of two strings is %s.",MAX_STRING,firstStr);
else
printf("Warning:The length is beyond space.");
}

int StrCat(char *firstStr,char *secondStr){
int i=0,j=0,p=1;

while(firstStr[i]!='\0')
i++;

while(secondStr[j]!='\0')
{firstStr[i]=secondStr[j];
i++;
j++;}

firstStr[i]='\0';

if(i>=MAX_STRING)
p=0;

return p;
}