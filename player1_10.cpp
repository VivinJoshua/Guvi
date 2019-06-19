//given 2 string checck whether they differ by one character
#include<bits/stdc++.h>
using namespace std;
int check(char *str1,char *str2)
{
  int check_char[26],i=0,j=0,count=0;
  memset(check_char,0,sizeof(check_char));
  int len1=strlen(str1);
  int len2=strlen(str2);
  for(i=0;i<len1;i++)
    check_char[str1[i]-'a']++;
  for(j=0;j<len2;j++)
  {
    check_char[str2[j]-'a']--;
    if(check_char[str2[j]-'a']<0)
      count++;
  }
  return count;
}
int main()
{
  char a[10],b[10];
  cin>>a>>b;
  int x=check(a,b);
  if(x==1)
    {
      cout<<"yes";
      return 0;
    }
    cout<<"no";

}
