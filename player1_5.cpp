// Roman TO integer
#include<bits/stdc++.h>
using namespace std;
int alpha(char x)
{
  int value;
  if(x=='I' || x=='i')
      value=1;
  else if (x=='V' || x=='v')
      value=5;

  else if (x=='X' || x=='x')
      value=10;
  return value;
}

int main()

{
  char x[100];
  int i=0,result=0;

  do
  {
  cin>>x;
result=0,i=0;
  while(x[i])
  {
    if(alpha(x[i]) >= alpha(x[i+1]))
      result+=alpha(x[i]);
    else
      {
        result+=(alpha(x[i+1]) - alpha(x[i]));
        i++;
      }
    i++;
  }
  cout<<result<<endl;
}while(x!="q");
}
