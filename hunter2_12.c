#include<stdio.h>
int main()
{
  int n,ar[100],x,temp;
  scanf("%d %d",&n,&x);
  for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
      if(ar[j]>ar[i])
      {
        temp=ar[j];
        ar[j]=ar[i];
        ar[i]=temp;
       }
     }
    }
    // for(int i=0;i<n;i++)
    //     printf("%d ",ar[i]);
    printf("%d",ar[x-1]);
    }
