#include<bits/stdc++.h>
using namespace std;
int main()
{
  char input[5];
  int i=1,res=0,len;
  cin>>input;
  len=strlen(input);
  len-=1;
  while(input[len])

  {
      if(input[len]=='v' || input[len]=='V')
        {
          if(input[len-1]=='i' || input[len-1]=='I')
          {
            res+=4;
            len-=2;
          }
          else
            {
              res+=5;
              len--;
            }
        }
      else if (input[len]=='I' || input[len]=='i')
      {
        res+=1;
        len--;
      }
      else if(input[len]=='x' || input[len]=='X')
        {
          if(input[len-1]=='i' || input[len-1]=='I')
          {
            res+=9;
            len-=2;
          }
          else
            {
              res+=10;
              len--;
            }
        }
  }
  cout<<res;
}
