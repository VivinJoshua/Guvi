//string reverse
#include<stdio.h>
#include<string.h>
int main()
{
char name[100],temp;
scanf("%s",name);
int len=strlen(name);
len-=1;
for(int i=0;i<=len/2;i++)
{
    temp=name[i];
    name[i]=name[len-i];
    name[len-i]=temp;
}
  printf("%s",name);
return 0;
}
