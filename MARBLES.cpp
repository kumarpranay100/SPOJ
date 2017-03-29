#include<iostream>
using namespace std;
long long C(long long n, long long r)
{
    long long ans=1, i;
    if(r > n-r)
        r = n-r;
    for(i = 0; i < r; i++)
        ans = ans*(n-i)/(i+1);
    return ans;
}

int main()
{
    int t;
    long long n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",C(n-1,k-1));
    }
    return 0;
}
