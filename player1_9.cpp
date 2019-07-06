#include<bits/stdc++.h>
using namespace std;
int main()
{
int start,end,cnt=0;
cin>>start>>end;
bool prime[end+1];
memset(prime,true,sizeof(prime));

for(int p=2;p*p<=end;p++)
{
    if(prime[p])
    {
        for(int i=p*2;i<=end;i+=p)
            prime[i]=false;
    }
}
for(int i=start;i<=end;i++)
    if(prime[i])
    cnt++;
        cout<<cnt;
return 0;
 }
