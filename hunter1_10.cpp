//array subset
#include<bits/stdc++.h>
using namespace std;
int subsequence(int n1,int n2,int arr1[],int arr2[])
{
  int chech_var[100];
  memset(chech_var,0,sizeof(chech_var));
  for(int i=0;i<n1;i++)
    chech_var[arr1[i]]++;
  for(int i=0;i<n2;i++)
  {
    chech_var[arr2[i]]--;
    if(chech_var[arr2[i]] < 0)
      return 0;
  }
  return 1;
}
int main()
{
  int n1,n2,arr1[100],arr2[100];
  cin>>n1>>n2;
  for(int i=0;i<n1;i++)
    cin>>arr1[i];
  for(int i=0;i<n2;i++)
    cin>>arr2[i];
    if(subsequence(n1,n2,arr1,arr2))
      {
        cout<<"yes";
        return 0;
      }
      cout<<"no";
}
