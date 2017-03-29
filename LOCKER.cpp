#include<iostream>
#define mod 1000000007
#define LL long long
using namespace std;

LL power(LL a, LL b)
{
    LL ans = 1;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            ans *= a;
            if(ans>mod)
            ans %= mod;
        }
        a *= a;
        if(a>mod)
            a %= mod;
        b = b>>1;
    }
    return ans;
}
int main()
{
    int t;
    LL n,x,y,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n<=4)
        {
            printf("%lld\n",n);
            continue;
        }
        x=n/3;
        y=n%3;
        if(y==1)
        {
            x--;
            y=4;
        }
        ans=power(3,x);
        if(y!=0)
            ans = (ans * y) % mod;
        printf("%lld\n",ans);
    }
}
