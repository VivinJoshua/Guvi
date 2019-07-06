#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str[1000];
  cin.getline(str,sizeof(str));
  str[0]=toupper(str[0]);
  for(int i=0;str[i];i++)
  {
  if(str[i]==' ' && str[i+1])
    str[i+1]=toupper(str[i+1]);
  }
  cout<<str;
//   cout<<"\n"<<toupper(str[0]);
  return 0;
 }
