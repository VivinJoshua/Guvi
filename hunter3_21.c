#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int arr[n][m],arr1[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
  }
 /* for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
        printf("%d ",arr[i][j]);
     printf("\n");
  } */
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
        arr1[i][j]=1;
   
  }

  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
      {
          
        if(arr[i][j]==0)
        {
            //printf("%d ",arr[i][j]);
          for(int r=0;r<n;r++)
              arr1[r][j]=0;
          for(int c=0;c<m;c++)
              arr1[i][c]=0;
          
        }
        
      }
  }
 
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
        printf("%d ",arr1[i][j]);
    printf("\n");
  }
  
  

  
}
