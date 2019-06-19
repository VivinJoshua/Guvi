//odd even charcter swap
#include<bits/stdc++.h>
using namespace std;
int swap(char *str)
{
  int len=strlen(str);
  char temp;
  for(int i=1;i<len;i+=2)
    {
      temp=str[i];
      str[i]=str[i-1];
      str[i-1]=temp;
    }
    cout<<str;
    return 0;
}
int main()
{
  char str[100];
  cin>>str;

  swap(str);

}
