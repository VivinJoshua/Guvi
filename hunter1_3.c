#include<stdio.h>
int main()
{
int n,arr[100],index=0,arr1[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  if(arr[i]==i)
     {
     arr1[index++]=i;
     }
   }
     if(index==0)
      printf("-1");
    else
     {
       for(int i=0;i<index;i++)
          printf("%d ",arr1[i]);
     }
   }
