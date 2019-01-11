#include <stdio.h>
#define MAX_STRING 20
void StrCpy(char *firstStr,char *secondStr);

int main(){
char firstStr[MAX_STRING];
char secondStr[MAX_STRING];

printf("Enter the firstStr(<%d):",MAX_STRING);
scanf("%s",firstStr);
printf("Enter the secondStr(<%d):",MAX_STRING);
scanf("%s",secondStr);

StrCpy(firstStr,secondStr);

printf("The copy of secondStr is %s.",firstStr);
}

void StrCpy(char *firstStr,char *secondStr){
int i=0;
while(secondStr[i]!='\0')
{firstStr[i]=secondStr[i];
i++;}
firstStr[i]='\0';
}