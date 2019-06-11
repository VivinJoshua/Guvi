#include<stdio.h>
int main()
{
int n,arr[1000],temp,ctr=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
    if(arr[i]==0)
      ctr++;
  }
  if(ctr==n)
    {
    printf("0");
    return 0;
    }
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n-1;j++)
    {
      if(arr[j]>arr[i]
        {
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
         }
      }
    }
   for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    }
    
