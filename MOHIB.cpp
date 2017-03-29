#include<iostream>
using namespace std;
int main()
{
    int t;
    long long avg,x,ans,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&avg);
        n = avg - x;
        ans = n*(avg+1) - (n*(n-1))/2;
        printf("%lld\n",ans);
    }
    return 0;
}
