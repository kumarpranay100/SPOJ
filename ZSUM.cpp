#include<stdio.h>
#define ll long long
#define mod 10000007
ll exp(ll a,ll b,ll n)
{
    ll ans=1;
    while(b)
    {
        if(b%2)
        {
            ans=(ans*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return ans;
}
int main()
{
    ll n,k,a,b,c,d,ans;
    scanf("%lld%lld",&n,&k);
    while(n)
    {
        a=(2*exp(n-1,k,mod))%mod;
        b=exp(n,k,mod);
        c=(2*exp(n-1,n-1,mod))%mod;
        d=exp(n,n,mod);
        ans=((a+b)%mod+(c+d)%mod)%mod;
        printf("%lld\n",ans);
        scanf("%lld%lld",&n,&k);
    }
    return 0;
}
