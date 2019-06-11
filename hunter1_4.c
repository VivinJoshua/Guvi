#include<stdio.h>
int main()
{
int n,arr[100],ar[100]={0},flag=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
  ar[arr[i]]++;
 }
 for(int i=0;i<100;i++)
 {
 if(ar[i]==1)
  {
  printf("%d ",i);
  flag=1;
  }
  }
  if(flag==0)
    printf("unique");
    }
