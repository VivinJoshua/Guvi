#include<stdio.h>
#include<string.h>
int main()
{
char name[100];
scanf("%s",name);
int len=strlen(name);
for(int i=len;i>=0;i--)
  printf("%c",name[i]);
return 0;
}
