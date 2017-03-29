#include<iostream>
using namespace std;
long long power(long long a,long long b)
{
    long long ans = 1;
    while(b>0)
    {
        if(b%2 == 1)
            ans *= a;
        a *= a;
        b = b>>1;
    }
    return ans;
}
int main()
{
    long long n,i=1;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            return 0;
        printf("Case %lld, N = %lld, # of different labelings = %lld\n",i++,n,power(n,n-2));
    }
}
