#include<iostream>
using namespace std;
long long a[100010];
long long p[100010];
long long max(long long a,long long b,long long c)
{
    if(a>b)
        if(a>c)     return a;
        else        return c;
    else
        if(b>c)     return b;
        else        return c;
}
long long price(int n)
{
    if(p[n]!=-1)
        return p[n];
    if(n==3)
        return p[n]=max(a[n]+a[n-1]+a[n-2], a[n]+a[n-1],a[n]+p[1]);
    if(n<6)
        return p[n]=max(a[n]+a[n-1]+a[n-2], a[n]+a[n-1]+price(n-4),a[n]+price(n-2));
    return p[n]=max(price(n-6)+a[n]+a[n-1]+a[n-2], price(n-4)+a[n]+a[n-1], price(n-2)+a[n]);
}
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&p[i]);
        for(i=0;i<n;i++)
        {
            a[i]=p[n-i-1];
            p[n-i-1]=-1;
        }
        for(i=0;i<n;i++)
        p[0]=a[0];
        p[1]=p[0]+a[1];
        p[2]=p[1]+a[2];
        long long ans = price(n-1);
        printf("%lld\n",ans);
    }
    return 0;
}
