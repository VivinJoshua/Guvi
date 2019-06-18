// CPP code to demonstrate append(str) 

#include <iostream> 
#include <string> 
using namespace std; 
void evalute(string name,string val)
{
    name.append(val);
    cout<<name;
  //  return 0;
}
int main()
{
    string name,val=".";
    cin>>name;
  //  cout<<name;
    evalute(name,val);
}
