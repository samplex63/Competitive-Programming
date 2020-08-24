#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll modl=1e9+7;
const ll ssize=1e5+5;
ll power10[ssize];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j,k,l;
    string n;
    power10[0]=1;
    for(i=1;i<ssize;i++)
    {
        power10[i]=(power10[i-1]*10)%modl;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=n.length();
        ll cur=0,ans=0;
        for(i=0;i<l;i++)
        {
            cur=((cur*10)%modl+(n[i]-'0'))%modl;
        }
        ans=cur;
        for(i=0;i<l-1;i++)
        {
            ans=(ans*power10[l])%modl;
            cur=cur-((n[i]-'0')*power10[l-1])%modl;
            if(cur<0)   cur+=modl;
            cur=(cur*10)%modl;
            cur=(cur+(n[i]-'0'))%modl;
            ans=(ans+cur)%modl;
        }
        cout<<ans<<endl;
    }
    return 0;
}