#include<iostream>
using namespace std;
int main()
{
    long long n,i,k,sum;
    int j,a[64]={0},b[64]={0};
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        j=0;
        scanf("%lld",&k);
        while(k)
        {
            if((k&1)==0)
                a[j]=1;
            else
                b[j]=1;
            j++;
            k=k>>1;
        }
        for(;j<64;j++)
            a[j]=1;
    }
    n=1;sum=0;
    for(j=0;j<64;j++)
    {
        if(a[j]==1&&b[j]==1)
            sum=sum+n;
        n=n<<1;
    }
    printf("%lld",sum);
    return 0;
}
