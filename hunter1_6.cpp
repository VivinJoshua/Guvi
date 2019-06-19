//first repeating number
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,check[100];
  memset(check,0,sizeof(check));
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      check[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
    if(check[arr[i]] >= 2)
      {
        cout<<arr[i];
        return 0;
      }
    }
      cout<<"unique";

}
