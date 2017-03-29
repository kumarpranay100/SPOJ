#include<iostream>
#include<math.h>
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
long long digit(long long n)
{
    long count = 0, x=n;
    if(n<10)
        return (n*(n+1))/2;
    while(x/10)
    {
        count++;
        x /= 10;
    }
    long long y=power(10,count);
    return ( (x*(n%y+1)) + (y*x*(x-1)/2) + (45*count*x*y/10) + digit(n%y) );
}
int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    while(a!=-1)
    {
        long long result = digit(b) - digit(a-1);
        printf("%lld\n", result);
        scanf("%lld %lld", &a, &b);
    }
    return 0;
}
