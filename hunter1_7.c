#include<stdio.h>
int main()
{
int n,arr[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
for(int i=0;i<n;i++)
{
  if(i%2==1)
    {
      if(arr[i]%2==0)
        printf("%d ",arr[i]);
    }
   else if(i%2==0)
    {
      if(arr[i]%2==1)
        printf("%d ",arr[i]);
     }
  }
  }
