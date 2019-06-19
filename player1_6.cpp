//strign isomorphism
#include<bits/stdc++.h>
using namespace std;
#define max_char 256
int isomorphism(char *str1,char *str2)
{
  int map[max_char];
  bool marked[max_char]={false};
  memset(map,-1,sizeof(map));
  int len1=strlen(str1);
  int len2=strlen(str2);
  if(len1!=len2)
    return 0;
  for(int i=0;i<len2;i++)
  {
    if(map[str1[i]]==-1)
    {
      if(marked[str2[i]]==true)
          return 0;
      marked[str2[i]]=true;

      map[str1[i]]=str2[i];
    }
    else if(map[str1[i]]!=str2[i])
      return 0;
  }
  return 1;
}
int main()
{
  char a[100],b[100];
  cin>>a>>b;
 // cout<<a<<"\n"<<b<<"\n";
  int x=isomorphism(a,b);
  if(x)
    cout<<"yes";
  else
    cout<<"no";
}
