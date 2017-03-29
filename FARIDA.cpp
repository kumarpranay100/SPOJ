#include<iostream>
using namespace std;
long long a[10002],b[10002];
long long max(long long a, long long b){return a>b?a:b;}
int main()
{
    int t,i,n,c=1;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("Case %d: %d\n",c++,0);
            continue;
        }
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        b[0]=a[0];
        b[1]=max(a[0],a[1]);
        for(i=2;i<n;i++)
            b[i]=max(a[i]+b[i-2],b[i-1]);
        printf("Case %d: %lld\n",c++,b[n-1]);
    }
    return 0;
}
