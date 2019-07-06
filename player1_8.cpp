#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str[1000];
  cin.getline(str,sizeof(str));
 
  for(int i=0;str[i];i++)
  {
  if(str[i]==' ' && str[i+1]!='\0')
    {
        // str[i+1]=toupper(str[i+1]);
        if(!(str[i+1]>=65 && str[i+1]<=90))
        // cout<<"i";
        str[i+1]-=32;
    }
    else
    if((str[i+1]>=65 && str[i+1]<=90))
        // cout<<"i";
        str[i+1]+=32;
  }
   str[0]=toupper(str[0]);
  cout<<str;
//   cout<<"\n"<<toupper(str[0]);
  return 0;
 }
